from __future__ import annotations

import pytest
from pytest_codspeed import BenchmarkFixture

from benchmarks.batch import batch
from benchmarks.data import (
    ADDRESS_BYTES,
    ADDRESS_HOLDERS,
    CHECKSUM_ADDRESSES,
    CONTRACTS,
    LOWER_ADDRESSES,
    UPPER_ADDRESSES,
)
from checksum_dict._utils import attempt_checksum, checksum_or_raise


ADDRESS_STRINGS = LOWER_ADDRESSES + CHECKSUM_ADDRESSES + UPPER_ADDRESSES
ADDRESS_STRING_IDS = [
    "lower-1",
    "lower-2",
    "lower-3",
    "checksum-1",
    "checksum-2",
    "checksum-3",
    "upper-1",
    "upper-2",
    "upper-3",
]


@pytest.mark.benchmark(group="attempt_checksum_str")
@pytest.mark.parametrize("address", ADDRESS_STRINGS, ids=ADDRESS_STRING_IDS)
def test_attempt_checksum_str(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(batch, 200, attempt_checksum, address)


@pytest.mark.benchmark(group="attempt_checksum_bytes")
@pytest.mark.parametrize("address", ADDRESS_BYTES, ids=["bytes-1", "bytes-2", "bytes-3"])
def test_attempt_checksum_bytes(benchmark: BenchmarkFixture, address: bytes) -> None:
    benchmark(batch, 100, attempt_checksum, address)


@pytest.mark.benchmark(group="attempt_checksum_contract")
@pytest.mark.parametrize("contract", CONTRACTS, ids=["contract-1", "contract-2", "contract-3"])
def test_attempt_checksum_contract(benchmark: BenchmarkFixture, contract: object) -> None:
    benchmark(batch, 200, attempt_checksum, contract)


@pytest.mark.benchmark(group="attempt_checksum_hasattr")
@pytest.mark.parametrize("holder", ADDRESS_HOLDERS, ids=["holder-1", "holder-2", "holder-3"])
def test_attempt_checksum_hasattr(benchmark: BenchmarkFixture, holder: object) -> None:
    benchmark(batch, 200, attempt_checksum, holder)


@pytest.mark.benchmark(group="checksum_or_raise")
@pytest.mark.parametrize("address", LOWER_ADDRESSES, ids=["lower-1", "lower-2", "lower-3"])
def test_checksum_or_raise(benchmark: BenchmarkFixture, address: str) -> None:
    benchmark(batch, 200, checksum_or_raise, address)
