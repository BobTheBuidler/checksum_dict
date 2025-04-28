"""
This library was built to have minimal dependencies, to minimize dependency conflicts for users.
The following code was ripped out of eth-brownie on 2022-Aug-06.
A big thanks to the many maintainers and contributors for their valuable work!
"""

from typing import TYPE_CHECKING, Final, Union

import cchecksum  # type: ignore [import-not-found]
from eth_typing import ChecksumAddress  # type: ignore [import-not-found]

from checksum_dict import _typing


Contract: Final = None if Contract is Any else Contract

# must not be Final so it can be redefined with lru cache in ypricemagic
to_checksum_address = cchecksum.to_checksum_address


def attempt_checksum(value: Union[str, bytes, Contract]) -> ChecksumAddress:
    # sourcery skip: merge-duplicate-blocks
    if isinstance(value, str):
        return checksum_or_raise(value)
    elif Contract is not None and isinstance(value, Contract):
        # already checksummed
        return value.address
    elif type(value) is bytes:  # only actual bytes type, mypyc will optimize this
        return checksum_or_raise(value.hex())
    else:  # other bytes types, mypyc will not optimize this
        return checksum_or_raise(value.hex())


def checksum_or_raise(string: str) -> ChecksumAddress:
    try:
        return to_checksum_address(string)
    except ValueError as e:
        raise ValueError(f"'{string}' is not a valid ETH address") from e
