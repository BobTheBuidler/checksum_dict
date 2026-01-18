from __future__ import annotations

import pytest
from pytest_codspeed import BenchmarkFixture

from benchmarks.batch import batch
from benchmarks.data import CHECKSUM_ADDRESSES, LOWER_ADDRESSES
from checksum_dict import ChecksumAddressDict


def _seed_dict() -> ChecksumAddressDict[int]:
    d: ChecksumAddressDict[int] = ChecksumAddressDict()
    for address in LOWER_ADDRESSES:
        d[address] = 1
    return d


SEED_DICT = _seed_dict()


def _getitem(d: ChecksumAddressDict[int], key: str) -> int:
    return d[key]


def _setitem_update(d: ChecksumAddressDict[int], key: str, value: int) -> None:
    d[key] = value


def _setitem_bulk() -> None:
    d: ChecksumAddressDict[int] = ChecksumAddressDict()
    for address in LOWER_ADDRESSES:
        d[address] = 1


def _setitem_nochecksum_bulk() -> None:
    d: ChecksumAddressDict[int] = ChecksumAddressDict()
    for address in CHECKSUM_ADDRESSES:
        d._setitem_nochecksum(address, 1)


@pytest.mark.benchmark(group="dict_getitem_hit")
@pytest.mark.parametrize("address", CHECKSUM_ADDRESSES, ids=["checksum-1", "checksum-2", "checksum-3"])
def test_getitem_hit(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(batch, 500, _getitem, SEED_DICT, address)


@pytest.mark.benchmark(group="dict_getitem_checksum")
@pytest.mark.parametrize("address", LOWER_ADDRESSES, ids=["lower-1", "lower-2", "lower-3"])
def test_getitem_checksum(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(batch, 500, _getitem, SEED_DICT, address)


@pytest.mark.benchmark(group="dict_setitem_update")
@pytest.mark.parametrize("address", CHECKSUM_ADDRESSES, ids=["checksum-1", "checksum-2", "checksum-3"])
def test_setitem_update(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(batch, 200, _setitem_update, SEED_DICT, address, 2)


@pytest.mark.benchmark(group="dict_setitem_checksum_insert")
def test_setitem_checksum_insert(benchmark: BenchmarkFixture) -> None:
    benchmark(batch, 50, _setitem_bulk)


@pytest.mark.benchmark(group="dict_setitem_nochecksum_insert")
def test_setitem_nochecksum_insert(benchmark: BenchmarkFixture) -> None:
    benchmark(batch, 50, _setitem_nochecksum_bulk)
