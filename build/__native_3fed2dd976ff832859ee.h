#ifndef MYPYC_NATIVE_3fed2dd976ff832859ee_H
#define MYPYC_NATIVE_3fed2dd976ff832859ee_H
#include <Python.h>
#include <CPy.h>
#ifndef MYPYC_DECLARED_tuple_T3OOO
#define MYPYC_DECLARED_tuple_T3OOO
typedef struct tuple_T3OOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
} tuple_T3OOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T4CIOO
#define MYPYC_DECLARED_tuple_T4CIOO
typedef struct tuple_T4CIOO {
    char f0;
    CPyTagged f1;
    PyObject *f2;
    PyObject *f3;
} tuple_T4CIOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T2OO
#define MYPYC_DECLARED_tuple_T2OO
typedef struct tuple_T2OO {
    PyObject *f0;
    PyObject *f1;
} tuple_T2OO;
#endif

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} checksum_dict___base___ChecksumAddressDictObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} checksum_dict___default___DefaultChecksumDictObject;


struct export_table_3fed2dd976ff832859ee {
    PyObject *(*CPyDef__utils___attempt_checksum)(PyObject *cpy_r_value);
    PyObject *(*CPyDef__utils___checksum_or_raise)(PyObject *cpy_r_string);
    char (*CPyDef__utils_____top_level__)(void);
    PyTypeObject **CPyType_base___ChecksumAddressDict;
    char (*CPyDef_base___ChecksumAddressDict_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_seed);
    char (*CPyDef_base___ChecksumAddressDict_____init___3__ChecksumAddressDict_glue)(PyObject *cpy_r_self, PyObject *cpy_r_seed);
    PyObject *(*CPyDef_base___ChecksumAddressDict_____repr__)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_base___ChecksumAddressDict_____repr___3__ChecksumAddressDict_glue)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_base___ChecksumAddressDict_____getitem__)(PyObject *cpy_r_self, PyObject *cpy_r_key);
    PyObject *(*CPyDef_base___ChecksumAddressDict_____getitem___3__ChecksumAddressDict_glue)(PyObject *cpy_r_self, PyObject *cpy_r_key);
    char (*CPyDef_base___ChecksumAddressDict_____setitem__)(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value);
    char (*CPyDef_base___ChecksumAddressDict_____setitem___3__ChecksumAddressDict_glue)(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value);
    PyObject *(*CPyDef_base___ChecksumAddressDict____getitem_nochecksum)(PyObject *cpy_r_self, PyObject *cpy_r_key);
    PyObject *(*CPyDef_base___ChecksumAddressDict____getitem_nochecksum__ChecksumAddressDict_glue)(PyObject *cpy_r_self, PyObject *cpy_r_key);
    char (*CPyDef_base___ChecksumAddressDict____setitem_nochecksum)(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value);
    char (*CPyDef_base___ChecksumAddressDict____setitem_nochecksum__ChecksumAddressDict_glue)(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value);
    char (*CPyDef_base_____top_level__)(void);
    PyTypeObject **CPyType_default___DefaultChecksumDict;
    char (*CPyDef_default___DefaultChecksumDict_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_default, PyObject *cpy_r_seed);
    char (*CPyDef_default___DefaultChecksumDict_____init___3__DefaultChecksumDict_glue)(PyObject *cpy_r_self, PyObject *cpy_r_default, PyObject *cpy_r_seed);
    PyObject *(*CPyDef_default___DefaultChecksumDict____getitem_nochecksum)(PyObject *cpy_r_self, PyObject *cpy_r_key);
    PyObject *(*CPyDef_default___DefaultChecksumDict____getitem_nochecksum__DefaultChecksumDict_glue)(PyObject *cpy_r_self, PyObject *cpy_r_key);
    char (*CPyDef_default_____top_level__)(void);
};
#endif
