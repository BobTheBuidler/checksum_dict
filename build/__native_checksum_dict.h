#ifndef MYPYC_NATIVE_checksum_dict_H
#define MYPYC_NATIVE_checksum_dict_H
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

#endif
