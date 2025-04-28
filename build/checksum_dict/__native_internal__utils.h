#ifndef MYPYC_NATIVE_INTERNAL_checksum_dict____utils_H
#define MYPYC_NATIVE_INTERNAL_checksum_dict____utils_H
#include <Python.h>
#include <CPy.h>
#include "__native__utils.h"

int CPyGlobalsInit(void);

extern PyObject *CPyStatics[24];
extern const char * const CPyLit_Str[];
extern const char * const CPyLit_Bytes[];
extern const char * const CPyLit_Int[];
extern const double CPyLit_Float[];
extern const double CPyLit_Complex[];
extern const int CPyLit_Tuple[];
extern const int CPyLit_FrozenSet[];
extern CPyModule *CPyModule_checksum_dict____utils_internal;
extern CPyModule *CPyModule_checksum_dict____utils;
extern PyObject *CPyStatic_globals;
extern CPyModule *CPyModule_builtins;
extern CPyModule *CPyModule_typing;
extern CPyModule *CPyModule_cchecksum;
extern CPyModule *CPyModule_eth_typing;
extern PyObject *CPyDef_attempt_checksum(PyObject *cpy_r_value);
extern PyObject *CPyPy_attempt_checksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_checksum_or_raise(PyObject *cpy_r_string);
extern PyObject *CPyPy_checksum_or_raise(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef___top_level__(void);
#endif
