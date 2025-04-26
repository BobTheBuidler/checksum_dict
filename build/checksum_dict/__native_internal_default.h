#ifndef MYPYC_NATIVE_INTERNAL_checksum_dict___default_H
#define MYPYC_NATIVE_INTERNAL_checksum_dict___default_H
#include <Python.h>
#include <CPy.h>
#include "__native_default.h"

int CPyGlobalsInit(void);

extern PyObject *CPyStatics[30];
extern const char * const CPyLit_Str[];
extern const char * const CPyLit_Bytes[];
extern const char * const CPyLit_Int[];
extern const double CPyLit_Float[];
extern const double CPyLit_Complex[];
extern const int CPyLit_Tuple[];
extern const int CPyLit_FrozenSet[];
extern CPyModule *CPyModule_checksum_dict___default_internal;
extern CPyModule *CPyModule_checksum_dict___default;
extern PyObject *CPyStatic_globals;
extern CPyModule *CPyModule_builtins;
extern CPyModule *CPyModule_typing;
extern CPyModule *CPyModule_eth_typing;
extern CPyModule *CPyModule_mypy_extensions;
extern CPyModule *CPyModule_checksum_dict___base;
extern PyTypeObject *CPyType_DefaultChecksumDict;
extern char CPyDef_DefaultChecksumDict_____init__(PyObject *cpy_r_self, PyObject *cpy_r_default, PyObject *cpy_r_seed);
extern PyObject *CPyPy_DefaultChecksumDict_____init__(PyObject *self, PyObject *args, PyObject *kw);
extern char CPyDef_DefaultChecksumDict_____init___3__DefaultChecksumDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_default, PyObject *cpy_r_seed);
extern PyObject *CPyPy_DefaultChecksumDict_____init___3__DefaultChecksumDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_DefaultChecksumDict____getitem_nochecksum(PyObject *cpy_r_self, PyObject *cpy_r_key);
extern PyObject *CPyPy_DefaultChecksumDict____getitem_nochecksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_DefaultChecksumDict____getitem_nochecksum__DefaultChecksumDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key);
extern PyObject *CPyPy_DefaultChecksumDict____getitem_nochecksum__DefaultChecksumDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef___top_level__(void);
#endif
