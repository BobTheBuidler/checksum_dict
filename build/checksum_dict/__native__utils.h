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


struct export_table_checksum_dict____utils {
    PyObject **CPyStatic__KNOWN_CHECKSUMMED_TYPES;
    PyObject *(*CPyDef_attempt_checksum)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_checksum_or_raise)(PyObject *cpy_r_string);
    char (*CPyDef__type_has_checksum_addr)(PyObject *cpy_r_typ);
    char (*CPyDef___top_level__)(void);
};
#endif
