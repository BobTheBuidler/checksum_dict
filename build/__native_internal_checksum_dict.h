#ifndef MYPYC_LIBRT_INTERNAL_checksum_dict_H
#define MYPYC_LIBRT_INTERNAL_checksum_dict_H
#include <Python.h>
#include <CPy.h>
#include "__native_checksum_dict.h"

int CPyGlobalsInit(void);

extern PyObject *CPyStatics[84];
extern const char * const CPyLit_Str[];
extern const char * const CPyLit_Bytes[];
extern const char * const CPyLit_Int[];
extern const double CPyLit_Float[];
extern const double CPyLit_Complex[];
extern const int CPyLit_Tuple[];
extern const int CPyLit_FrozenSet[];
extern CPyModule *CPyModule_checksum_dict____utils__internal;
extern CPyModule *CPyModule_checksum_dict____utils;
extern PyObject *CPyStatic__utils___globals;
extern CPyModule *CPyModule_builtins;
extern CPyModule *CPyModule_typing;
extern CPyModule *CPyModule_cchecksum;
extern CPyModule *CPyModule_eth_typing;
extern CPyModule *CPyModule_checksum_dict;
extern CPyModule *CPyModule_checksum_dict___base__internal;
extern CPyModule *CPyModule_checksum_dict___base;
extern PyObject *CPyStatic_base___globals;
extern CPyModule *CPyModule_collections___abc;
extern CPyModule *CPyModule_mypy_extensions;
extern CPyModule *CPyModule_checksum_dict____typing;
extern CPyModule *CPyModule_checksum_dict___default__internal;
extern CPyModule *CPyModule_checksum_dict___default;
extern PyObject *CPyStatic_default___globals;
extern CPyModule *CPyModule_collections;
extern PyObject *CPyStatic__utils____KNOWN_CHECKSUMMED_TYPES;
extern PyObject *CPyDef__utils___attempt_checksum(PyObject *cpy_r_value);
extern PyObject *CPyPy__utils___attempt_checksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef__utils___checksum_or_raise(PyObject *cpy_r_string);
extern PyObject *CPyPy__utils___checksum_or_raise(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef__utils____type_has_checksum_addr(PyObject *cpy_r_typ);
extern PyObject *CPyPy__utils____type_has_checksum_addr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef__utils_____top_level__(void);
extern PyTypeObject *CPyType_base___ChecksumAddressDict;
extern char CPyDef_base___ChecksumAddressDict_____init__(PyObject *cpy_r_self, PyObject *cpy_r_seed);
extern PyObject *CPyPy_base___ChecksumAddressDict_____init__(PyObject *self, PyObject *args, PyObject *kw);
extern char CPyDef_base___ChecksumAddressDict_____init___3__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_seed);
extern PyObject *CPyPy_base___ChecksumAddressDict_____init___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_base___ChecksumAddressDict_____repr__(PyObject *cpy_r_self);
extern PyObject *CPyPy_base___ChecksumAddressDict_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_base___ChecksumAddressDict_____repr___3__ChecksumAddressDict_glue(PyObject *cpy_r_self);
extern PyObject *CPyPy_base___ChecksumAddressDict_____repr___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_base___ChecksumAddressDict_____getitem__(PyObject *cpy_r_self, PyObject *cpy_r_key);
extern PyObject *CPyPy_base___ChecksumAddressDict_____getitem__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_base___ChecksumAddressDict_____getitem___3__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key);
extern PyObject *CPyPy_base___ChecksumAddressDict_____getitem___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef_base___ChecksumAddressDict_____setitem__(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value);
extern PyObject *CPyPy_base___ChecksumAddressDict_____setitem__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef_base___ChecksumAddressDict_____setitem___3__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value);
extern PyObject *CPyPy_base___ChecksumAddressDict_____setitem___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_base___ChecksumAddressDict____getitem_nochecksum(PyObject *cpy_r_self, PyObject *cpy_r_key);
extern PyObject *CPyPy_base___ChecksumAddressDict____getitem_nochecksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_base___ChecksumAddressDict____getitem_nochecksum__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key);
extern PyObject *CPyPy_base___ChecksumAddressDict____getitem_nochecksum__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef_base___ChecksumAddressDict____setitem_nochecksum(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value);
extern PyObject *CPyPy_base___ChecksumAddressDict____setitem_nochecksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef_base___ChecksumAddressDict____setitem_nochecksum__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value);
extern PyObject *CPyPy_base___ChecksumAddressDict____setitem_nochecksum__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef_base_____top_level__(void);
extern PyTypeObject *CPyType_default___DefaultChecksumDict;
extern char CPyDef_default___DefaultChecksumDict_____init__(PyObject *cpy_r_self, PyObject *cpy_r_default, PyObject *cpy_r_seed);
extern PyObject *CPyPy_default___DefaultChecksumDict_____init__(PyObject *self, PyObject *args, PyObject *kw);
extern char CPyDef_default___DefaultChecksumDict_____init___3__DefaultChecksumDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_default, PyObject *cpy_r_seed);
extern PyObject *CPyPy_default___DefaultChecksumDict_____init___3__DefaultChecksumDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_default___DefaultChecksumDict____getitem_nochecksum(PyObject *cpy_r_self, PyObject *cpy_r_key);
extern PyObject *CPyPy_default___DefaultChecksumDict____getitem_nochecksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_default___DefaultChecksumDict____getitem_nochecksum__DefaultChecksumDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key);
extern PyObject *CPyPy_default___DefaultChecksumDict____getitem_nochecksum__DefaultChecksumDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef_default_____top_level__(void);
#endif
