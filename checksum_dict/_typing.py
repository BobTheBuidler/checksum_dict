from typing import TYPE_CHECKING, Any, Protocol, Union

from eth_typing import Address, ChecksumAddress, HexAddress  # type: ignore [import-not-found]
from typing_extensions import runtime_checkable


# We need to assign mypyc has issues compiling TYPE_CHECKING
# TODO: PR to mypyc to fix this


class _AddressHaver(Protocol):
    address: ChecksumAddress


if TYPE_CHECKING:
    import brownie  # type: ignore [import-not-found]
    import y  # type: ignore [import-not-found]

    Contract = Union[brownie.Contract, y.Contract]
    ERC20 = y.ERC20

else:

    @runtime_checkable
    class Contract(_AddressHaver): ...

    @runtime_checkable
    class ERC20(_AddressHaver): ...


AnyAddressOrContract = Union[Address, HexAddress, ChecksumAddress, Contract, ERC20]
