from __future__ import annotations

import cchecksum

LOWER_ADDRESSES = [
    "0xb47e3cd837ddf8e4c57f05d70ab865de6e193bbb",
    "0xde709f2102306220921060314715629080e2fb77",
    "0x52908400098527886e0f7030069857d2e4169ee7",
]

CHECKSUM_ADDRESSES = [cchecksum.to_checksum_address(address) for address in LOWER_ADDRESSES]
UPPER_ADDRESSES = [address.upper() for address in LOWER_ADDRESSES]
ADDRESS_BYTES = [bytes.fromhex(address[2:]) for address in LOWER_ADDRESSES]


class Contract:
    __module__ = "brownie"

    def __init__(self, address: str) -> None:
        self.address = address


class ERC20:
    __module__ = "y"

    def __init__(self, address: str) -> None:
        self.address = address


class AddressHolder:
    address: str = ""

    def __init__(self, address: str) -> None:
        self.address = address


CONTRACTS = [Contract(address) for address in CHECKSUM_ADDRESSES]
ERC20S = [ERC20(address) for address in CHECKSUM_ADDRESSES]
ADDRESS_HOLDERS = [AddressHolder(address) for address in CHECKSUM_ADDRESSES]
