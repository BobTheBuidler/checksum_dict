import pytest

from checksum_dict import ChecksumAddressSingletonMeta, exceptions


ADDRESS = "0xb47e3cd837ddf8e4c57f05d70ab865de6e193bbb"

@pytest.mark.parametrize(
    "address, expected",
    [
        (
            "0xb47e3cd837ddf8e4c57f05d70ab865de6e193bbb",
            "0xb47e3cd837dDF8e4c57F05d70Ab865de6e193BBB",
        ),  # id: get_instance-success
        ("0x0000000000000000000000000000000000000000", None),  # id: get_instance-not-found
    ],
)
def test_singleton_creation(address, expected):
    # Arrange
    class MySingleton(metaclass=ChecksumAddressSingletonMeta):
        def __init__(self, address):
            self.address = address

    # Act
    instance1 = MySingleton(address)
    instance2 = MySingleton(address)

    # Assert
    assert instance1 is instance2
    assert instance1.address == address
    assert instance2.address == address


def test_singleton_different_addresses():
    # Arrange
    class MySingleton(metaclass=ChecksumAddressSingletonMeta):
        def __init__(self, address):
            self.address = address

    # Act
    instance1 = MySingleton("0xb47e3cd837ddf8e4c57f05d70ab865de6e193bbb")
    instance2 = MySingleton("0x0000000000000000000000000000000000000001")

    # Assert
    assert instance1 is not instance2


@pytest.mark.parametrize(
    "address, expected",
    [
        (
            "0xb47e3cd837ddf8e4c57f05d70ab865de6e193bbb",
            "0xb47e3cd837ddf8e4c57f05d70ab865de6e193bbb",
        ),  # id: getitem-success
    ],
)
def test_singleton_getitem(address, expected):
    # Arrange
    class MySingleton(metaclass=ChecksumAddressSingletonMeta):
        def __init__(self, address):
            self.address = address

    instance = MySingleton(address)

    # Act
    retrieved_instance = MySingleton[address]

    # Assert
    assert retrieved_instance is instance
    assert retrieved_instance.address == expected


def test_singleton_getitem_keyerror():
    # Arrange
    class MySingleton(metaclass=ChecksumAddressSingletonMeta):
        def __init__(self, address):
            self.address = address

    # Act & Assert
    with pytest.raises(exceptions.KeyError):
        MySingleton["0xb47e3cd837ddf8e4c57f05d70ab865de6e193bbb"]


def test_singleton_setitem():
    # Arrange
    class MySingleton(metaclass=ChecksumAddressSingletonMeta):
        def __init__(self, address):
            self.address = address

    # Act
    instance = MySingleton(ADDRESS)

    # Assert
    assert MySingleton[ADDRESS] is instance


def test_singleton_delitem():
    # Arrange
    class MySingleton(metaclass=ChecksumAddressSingletonMeta):
        def __init__(self, address):
            self.address = address

    instance = MySingleton(ADDRESS)

    # Act
    del MySingleton[ADDRESS]

    # Assert
    with pytest.raises(exceptions.KeyError):
        MySingleton[ADDRESS]


def test_singleton_delete_instance():
    # Arrange
    class MySingleton(metaclass=ChecksumAddressSingletonMeta):
        def __init__(self, address):
            self.address = address

    instance = MySingleton(ADDRESS)

    # Act
    MySingleton.delete_instance(ADDRESS)

    # Assert - Does not fail when calling delete_instance again
    MySingleton.delete_instance(ADDRESS)


@pytest.mark.parametrize(
    "address, expected",
    [
        (
            "0xb47e3cd837ddf8e4c57f05d70ab865de6e193bbb",
            "0xb47e3cd837ddf8e4c57f05d70ab865de6e193bbb",
        ),  # id: get_instance-success
        ("0x0000000000000000000000000000000000000000", None),  # id: get_instance-not-found
    ],
)
def test_singleton_get_instance(address, expected):
    # Arrange
    class MySingleton(metaclass=ChecksumAddressSingletonMeta):
        def __init__(self, address):
            self.address = address

    if expected:
        instance = MySingleton(address)

    # Act
    retrieved_instance = MySingleton.get_instance(address)

    # Assert
    if expected:
        assert retrieved_instance.address == expected
    else:
        assert retrieved_instance is None


def test_singleton_delete_instance():
    # Arrange
    class MySingleton(metaclass=ChecksumAddressSingletonMeta):
        def __init__(self, address):
            self.address = address

    instance = MySingleton(ADDRESS)

    # Act
    MySingleton.delete_instance(ADDRESS)

    # Assert
    assert MySingleton.get_instance(ADDRESS) is None

    # Act & Assert - deleting a non-existent instance should not raise an error
    MySingleton.delete_instance(ADDRESS)
