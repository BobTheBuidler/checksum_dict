from typing import TYPE_CHECKING, Any, Protocol, Union

from eth_typing import Address, ChecksumAddress, HexAddress  # type: ignore [import-not-found]
from typing_extensions import runtime_checkable


# We need to assign mypyc has issues compiling TYPE_CHECKING
# TODO: PR to mypyc to fix this
if TYPE_CHECKING:
    import brownie  # type: ignore [import-not-found]
    import y  # type: ignore [import-not-found]

    Contract = brownie.Contract
    ERC20 = y.ERC20

else:

    @runtime_checkable
    class Contract(Protocol):
        address: ChecksumAddress

    @runtime_checkable
    class ERC20(Protocol):
        address: ChecksumAddress


AnyAddressOrContract = Union[Address, HexAddress, ChecksumAddress, Contract, ERC20]
