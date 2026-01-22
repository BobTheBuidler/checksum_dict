from __future__ import annotations

import pytest
from pytest_codspeed import BenchmarkFixture

from benchmarks.batch import batch
from benchmarks.data import CHECKSUM_ADDRESSES, LOWER_ADDRESSES
from checksum_dict import DefaultChecksumDict


def _seed_default() -> DefaultChecksumDict[int]:
    d: DefaultChecksumDict[int] = DefaultChecksumDict(int)
    for address in LOWER_ADDRESSES:
        d[address] = 1
    return d


SEED_DEFAULT = _seed_default()


def _default_hit(d: DefaultChecksumDict[int], key: str) -> int:
    return d[key]


def _default_miss(address: str) -> int:
    d: DefaultChecksumDict[int] = DefaultChecksumDict(int)
    return d[address]


@pytest.mark.benchmark(group="default_getitem_hit")
@pytest.mark.parametrize("address", CHECKSUM_ADDRESSES, ids=["checksum-1", "checksum-2", "checksum-3"])
def test_default_getitem_hit(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(batch, 300, _default_hit, SEED_DEFAULT, address)


@pytest.mark.benchmark(group="default_getitem_miss")
@pytest.mark.parametrize("address", LOWER_ADDRESSES, ids=["lower-1", "lower-2", "lower-3"])
def test_default_getitem_miss(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(batch, 100, _default_miss, address)
