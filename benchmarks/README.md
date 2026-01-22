# Benchmarks for checksum_dict

This directory contains microbenchmarks for core checksum_dict behaviors.

- `test_utils_benchmarks.py`: `attempt_checksum` and checksum helpers
- `test_dict_benchmarks.py`: `ChecksumAddressDict` get/set hot paths
- `test_default_benchmarks.py`: `DefaultChecksumDict` default misses/hits
- `test_singleton_benchmarks.py`: `ChecksumAddressSingletonMeta` hit/miss behavior

## Running Benchmarks

Install codspeed dependencies:

```
pip install -r requirements-codspeed.txt
```

Run the suite:

```
pytest benchmarks/ --codspeed
```
