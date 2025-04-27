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

#ifndef MYPYC_DECLARED_tuple_T4OOOO
#define MYPYC_DECLARED_tuple_T4OOOO
typedef struct tuple_T4OOOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
    PyObject *f3;
} tuple_T4OOOO;
#endif


struct export_table_checksum_dict____utils {
    PyObject **CPyStatic_to_checksum_address;
    PyObject *(*CPyDef_attempt_checksum)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_checksum_or_raise)(PyObject *cpy_r_string);
    char (*CPyDef___top_level__)(void);
};
#endif
