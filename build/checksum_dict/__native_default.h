#ifndef MYPYC_NATIVE_checksum_dict___default_H
#define MYPYC_NATIVE_checksum_dict___default_H
#include <Python.h>
#include <CPy.h>
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
} checksum_dict___default___DefaultChecksumDictObject;


struct export_table_checksum_dict___default {
    PyObject **CPyStatic_DefaultChecksumDict___keys;
    PyObject **CPyStatic_DefaultChecksumDict___values;
    PyObject **CPyStatic_DefaultChecksumDict___items;
    PyTypeObject **CPyType_DefaultChecksumDict;
    char (*CPyDef_DefaultChecksumDict_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_default, PyObject *cpy_r_seed);
    char (*CPyDef_DefaultChecksumDict_____init___3__DefaultChecksumDict_glue)(PyObject *cpy_r_self, PyObject *cpy_r_default, PyObject *cpy_r_seed);
    PyObject *(*CPyDef_DefaultChecksumDict____getitem_nochecksum)(PyObject *cpy_r_self, PyObject *cpy_r_key);
    PyObject *(*CPyDef_DefaultChecksumDict____getitem_nochecksum__DefaultChecksumDict_glue)(PyObject *cpy_r_self, PyObject *cpy_r_key);
    char (*CPyDef___top_level__)(void);
};
#endif
