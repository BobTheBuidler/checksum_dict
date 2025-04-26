#ifndef MYPYC_NATIVE_INTERNAL_checksum_dict____utils_H
#define MYPYC_NATIVE_INTERNAL_checksum_dict____utils_H
#include <Python.h>
#include <CPy.h>
#include "__native__utils.h"

int CPyGlobalsInit(void);

extern PyObject *CPyStatics[50];
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
extern CPyModule *CPyModule_binascii;
extern CPyModule *CPyModule_typing;
extern CPyModule *CPyModule_cchecksum;
extern CPyModule *CPyModule_eth_typing;
extern CPyModule *CPyModule_checksum_dict;
extern PyObject *CPyStatic_HexBytes;
extern PyObject *CPyStatic_to_checksum_address;
extern PyObject *CPyStatic_unhexlify;
extern PyObject *CPyDef_checksum_value(PyObject *cpy_r_value);
extern PyObject *CPyPy_checksum_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_add_0x_prefix(PyObject *cpy_r_value);
extern PyObject *CPyPy_add_0x_prefix(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_to_bytes(PyObject *cpy_r_val);
extern PyObject *CPyPy_to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_hexstr_to_bytes(PyObject *cpy_r_hexstr);
extern PyObject *CPyPy_hexstr_to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef___top_level__(void);
#endif
