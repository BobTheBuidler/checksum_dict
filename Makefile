
PYTHON_BIN ?= python
VENV ?= .venv
PYTHON := $(VENV)/bin/python
PIP := $(PYTHON) -m pip

.PHONY: docs mypyc test dev-deps venv

venv: $(PYTHON)

$(PYTHON):
	$(PYTHON_BIN) -m venv $(VENV)
	$(PIP) install --upgrade pip setuptools==68.2.2

docs:
	rm -r ./docs/source -f
	rm -r ./docs/_templates -f
	rm -r ./docs/_build -f
	sphinx-apidoc -o ./docs/source ./checksum_dict

mypyc:
	mypyc checksum_dict/_utils.py checksum_dict/base.py checksum_dict/default.py --strict --pretty --disable-error-code unused-ignore --disable-error-code import-not-found --install-types 

dev-deps: venv
	$(PIP) install -r requirements-dev.txt

test: dev-deps
	$(PIP) check
	PYTEST_DISABLE_PLUGIN_AUTOLOAD=1 $(PYTHON) -m pytest
