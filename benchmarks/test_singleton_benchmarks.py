from __future__ import annotations

import pytest
from pytest_codspeed import BenchmarkFixture

from benchmarks.batch import batch
from benchmarks.data import CHECKSUM_ADDRESSES, LOWER_ADDRESSES
from checksum_dict import ChecksumAddressSingletonMeta


class DemoSingleton(metaclass=ChecksumAddressSingletonMeta):
    def __init__(self, address: str) -> None:
        self.address = address


_ = DemoSingleton(CHECKSUM_ADDRESSES[0])


def _singleton_hit(address: str) -> DemoSingleton:
    return DemoSingleton(address)


def _singleton_miss(address: str) -> DemoSingleton:
    DemoSingleton._ChecksumAddressSingletonMeta__instances.clear()
    DemoSingleton._ChecksumAddressSingletonMeta__locks.clear()
    return DemoSingleton(address)


@pytest.mark.benchmark(group="singleton_hit")
def test_singleton_hit(benchmark: BenchmarkFixture) -> None:
    DemoSingleton(CHECKSUM_ADDRESSES[0])
    benchmark(batch, 200, _singleton_hit, CHECKSUM_ADDRESSES[0])


@pytest.mark.benchmark(group="singleton_miss")
def test_singleton_miss(benchmark: BenchmarkFixture) -> None:
    benchmark(batch, 50, _singleton_miss, LOWER_ADDRESSES[0])
