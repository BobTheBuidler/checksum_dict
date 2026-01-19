from pathlib import Path

from mypyc.build import mypycify
from setuptools import find_packages, setup

this_directory = Path(__file__).parent
long_description = (this_directory / "README.md").read_text()

setup(
    name="checksum_dict",
    description="checksum_dict's objects handle the simple but repetitive task of checksumming addresses before setting/getting dictionary values.",
    url="https://github.com/BobTheBuidler/checksum_dict",
    license="MIT",
    author="BobTheBuidler",
    author_email="bobthebuidlerdefi@gmail.com",
    python_requires=">=3.9,<3.15",
    classifiers=[
        "Intended Audience :: Developers",
        "Programming Language :: Python :: 3",
        "Programming Language :: Python :: 3.9",
        "Programming Language :: Python :: 3.10",
        "Programming Language :: Python :: 3.11",
        "Programming Language :: Python :: 3.12",
        "Programming Language :: Python :: 3.13",
        "Programming Language :: Python :: 3.14",
        "Programming Language :: Python :: Implementation :: CPython",
        "Operating System :: OS Independent",
        "Topic :: Software Development :: Libraries",
    ],
    long_description=long_description,
    long_description_content_type="text/markdown",
    packages=find_packages(),
    use_scm_version={
        "root": ".",
        "relative_to": __file__,
        "local_scheme": "no-local-version",
        "version_scheme": "python-simplified-semver",
    },
    setup_requires=["setuptools_scm"],
    install_requires=["cchecksum>=0.0.3", "mypy_extensions>=0.4.2"],
    package_data={"checksum_dict": ["py.typed"]},
    include_package_data=True,
    ext_modules=mypycify(
        [
            "checksum_dict/_utils.py",
            "checksum_dict/base.py",
            "checksum_dict/default.py",
        ],
        strict_dunder_typing=True,
        group_name="checksum_dict",
    ),
    zip_safe=False,
)
