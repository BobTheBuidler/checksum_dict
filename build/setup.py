from setuptools import setup
from mypyc.build import mypycify

setup(
    name='mypyc_output',
    ext_modules=mypycify(
        ['checksum_dict/_utils.py', 'checksum_dict/base.py', 'checksum_dict/default.py', '--strict', '--pretty', '--disable-error-code', 'unused-ignore', '--disable-error-code', 'import-not-found', '--install-types'],
        opt_level="3",
        debug_level="1",
        strict_dunder_typing=True,
        log_trace=False,
    ),
)
