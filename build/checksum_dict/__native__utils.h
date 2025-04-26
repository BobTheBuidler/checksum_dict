#ifndef MYPYC_NATIVE_checksum_dict____utils_H
#define MYPYC_NATIVE_checksum_dict____utils_H
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

#ifndef MYPYC_DECLARED_tuple_T2OO
#define MYPYC_DECLARED_tuple_T2OO
typedef struct tuple_T2OO {
    PyObject *f0;
    PyObject *f1;
} tuple_T2OO;
#endif


struct export_table_checksum_dict____utils {
    PyObject **CPyStatic_HexBytes;
    PyObject **CPyStatic_to_checksum_address;
    PyObject **CPyStatic_unhexlify;
    PyObject *(*CPyDef_checksum_value)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_add_0x_prefix)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_to_bytes)(PyObject *cpy_r_val);
    PyObject *(*CPyDef_hexstr_to_bytes)(PyObject *cpy_r_hexstr);
    char (*CPyDef___top_level__)(void);
};
#endif
