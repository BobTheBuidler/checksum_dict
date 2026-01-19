#ifndef DIFFCHECK_PLACEHOLDER
#define DIFFCHECK_PLACEHOLDER 0
#endif
#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "float_ops.c"
#include "str_ops.c"
#include "bytes_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "pythonsupport.c"
#include "__native_checksum_dict.h"
#include "__native_internal_checksum_dict.h"
static PyMethodDef _utilsmodule_methods[] = {
    {"attempt_checksum", (PyCFunction)CPyPy__utils___attempt_checksum, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("attempt_checksum(value)\n--\n\n") /* docstring */},
    {"checksum_or_raise", (PyCFunction)CPyPy__utils___checksum_or_raise, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("checksum_or_raise(string)\n--\n\n") /* docstring */},
    {"_type_has_checksum_addr", (PyCFunction)CPyPy__utils____type_has_checksum_addr, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_type_has_checksum_addr(typ)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_checksum_dict____utils(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_checksum_dict____utils__internal, "__name__");
    CPyStatic__utils___globals = PyModule_GetDict(CPyModule_checksum_dict____utils__internal);
    if (unlikely(CPyStatic__utils___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef__utils_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_checksum_dict____utils__internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic__utils____KNOWN_CHECKSUMMED_TYPES);
    CPyStatic__utils____KNOWN_CHECKSUMMED_TYPES = NULL;
    return -1;
}
static struct PyModuleDef _utilsmodule = {
    PyModuleDef_HEAD_INIT,
    "checksum_dict._utils",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    _utilsmodule_methods,
    NULL,
};

PyObject *CPyInit_checksum_dict____utils(void)
{
    if (CPyModule_checksum_dict____utils__internal) {
        Py_INCREF(CPyModule_checksum_dict____utils__internal);
        return CPyModule_checksum_dict____utils__internal;
    }
    CPyModule_checksum_dict____utils__internal = PyModule_Create(&_utilsmodule);
    if (unlikely(CPyModule_checksum_dict____utils__internal == NULL))
        goto fail;
    if (CPyExec_checksum_dict____utils(CPyModule_checksum_dict____utils__internal) != 0)
        goto fail;
    return CPyModule_checksum_dict____utils__internal;
    fail:
    return NULL;
}

PyObject *CPyDef__utils___attempt_checksum(PyObject *cpy_r_value) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    cpy_r_r0 = PyUnicode_Check(cpy_r_value);
    if (!cpy_r_r0) goto CPyL4;
    CPy_INCREF(cpy_r_value);
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r1 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "attempt_checksum", 29, CPyStatic__utils___globals, "str", cpy_r_value);
        goto CPyL27;
    }
    cpy_r_r2 = CPyDef__utils___checksum_or_raise(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL27;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = CPy_TYPE(cpy_r_value);
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = (PyObject *)&PyBytes_Type;
    cpy_r_r5 = cpy_r_r3 == cpy_r_r4;
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r5) {
        goto CPyL28;
    } else
        goto CPyL10;
CPyL5: ;
    CPy_INCREF(cpy_r_value);
    cpy_r_r6 = cpy_r_value;
    cpy_r_r7 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'hex' */
    PyObject *cpy_r_r8[1] = {cpy_r_r6};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = PyObject_VectorcallMethod(cpy_r_r7, cpy_r_r9, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL29;
    }
    CPy_DECREF(cpy_r_r6);
    cpy_r_r11 = cpy_r_r10;
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "attempt_checksum", 31, CPyStatic__utils___globals, "str", cpy_r_r11);
        goto CPyL27;
    }
    cpy_r_r13 = CPyDef__utils___checksum_or_raise(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL27;
    }
    return cpy_r_r13;
CPyL10: ;
    cpy_r_r14 = CPyDef__utils____type_has_checksum_addr(cpy_r_r3);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL30;
    }
    if (cpy_r_r14) {
        goto CPyL31;
    } else
        goto CPyL16;
CPyL12: ;
    CPy_INCREF(cpy_r_value);
    cpy_r_r15 = cpy_r_value;
    cpy_r_r16 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'address' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL27;
    }
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "attempt_checksum", 33, CPyStatic__utils___globals, "str", cpy_r_r17);
        goto CPyL27;
    }
    return cpy_r_r18;
CPyL16: ;
    cpy_r_r19 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'address' */
    cpy_r_r20 = PyObject_HasAttr(cpy_r_r3, cpy_r_r19);
    CPy_DECREF(cpy_r_r3);
    if (!cpy_r_r20) goto CPyL22;
    CPy_INCREF(cpy_r_value);
    cpy_r_r21 = cpy_r_value;
    cpy_r_r22 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'address' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL27;
    }
    if (likely(PyUnicode_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "attempt_checksum", 35, CPyStatic__utils___globals, "str", cpy_r_r23);
        goto CPyL27;
    }
    cpy_r_r25 = CPyDef__utils___checksum_or_raise(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL27;
    }
    return cpy_r_r25;
CPyL22: ;
    CPy_INCREF(cpy_r_value);
    cpy_r_r26 = cpy_r_value;
    cpy_r_r27 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'hex' */
    PyObject *cpy_r_r28[1] = {cpy_r_r26};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = PyObject_VectorcallMethod(cpy_r_r27, cpy_r_r29, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_r26);
    cpy_r_r31 = cpy_r_r30;
    if (likely(PyUnicode_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "attempt_checksum", 37, CPyStatic__utils___globals, "str", cpy_r_r31);
        goto CPyL27;
    }
    cpy_r_r33 = CPyDef__utils___checksum_or_raise(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL27;
    }
    return cpy_r_r33;
CPyL27: ;
    cpy_r_r34 = NULL;
    return cpy_r_r34;
CPyL28: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL5;
CPyL29: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL27;
CPyL31: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL12;
CPyL32: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL27;
}

PyObject *CPyPy__utils___attempt_checksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:attempt_checksum", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value;
    if (PyUnicode_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL1;
    if (PyBytes_Check(obj_value) || PyByteArray_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL1;
    arg_value = obj_value;
    if (arg_value != NULL) goto __LL1;
    CPy_TypeError("union[str, bytes, object]", obj_value); 
    goto fail;
__LL1: ;
    PyObject *retval = CPyDef__utils___attempt_checksum(arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
    return NULL;
}

PyObject *CPyDef__utils___checksum_or_raise(PyObject *cpy_r_string) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T3OOO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    cpy_r_r0 = CPyStatic__utils___globals;
    cpy_r_r1 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'to_checksum_address' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL5;
    }
    PyObject *cpy_r_r3[1] = {cpy_r_string};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_Vectorcall(cpy_r_r2, cpy_r_r4, 1, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL5;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "checksum_or_raise", 42, CPyStatic__utils___globals, "str", cpy_r_r5);
        goto CPyL5;
    }
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = CPy_CatchError();
    cpy_r_r8 = CPyModule_builtins;
    cpy_r_r9 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'ValueError' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL14;
    }
    cpy_r_r11 = CPy_ExceptionMatches(cpy_r_r10);
    CPy_DecRef(cpy_r_r10);
    if (!cpy_r_r11) goto CPyL12;
    cpy_r_r12 = CPy_GetExcValue();
    CPy_DecRef(cpy_r_r12);
    cpy_r_r13 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* "'" */
    cpy_r_r14 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* "' is not a valid ETH address" */
    cpy_r_r15 = CPyStr_Build(3, cpy_r_r13, cpy_r_string, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL14;
    }
    cpy_r_r16 = CPyModule_builtins;
    cpy_r_r17 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'ValueError' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r19[1] = {cpy_r_r15};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_Vectorcall(cpy_r_r18, cpy_r_r20, 1, 0);
    CPy_DecRef(cpy_r_r18);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL17;
    }
    CPy_DecRef(cpy_r_r15);
    CPy_Raise(cpy_r_r21);
    CPy_DecRef(cpy_r_r21);
    if (unlikely(!0)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL14;
    } else
        goto CPyL18;
CPyL11: ;
    CPy_Unreachable();
CPyL12: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL14;
    } else
        goto CPyL19;
CPyL13: ;
    CPy_Unreachable();
CPyL14: ;
    CPy_RestoreExcInfo(cpy_r_r7);
    CPy_DecRef(cpy_r_r7.f0);
    CPy_DecRef(cpy_r_r7.f1);
    CPy_DecRef(cpy_r_r7.f2);
    cpy_r_r22 = CPy_KeepPropagating();
    if (!cpy_r_r22) goto CPyL16;
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
CPyL17: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_r7.f0);
    CPy_DecRef(cpy_r_r7.f1);
    CPy_DecRef(cpy_r_r7.f2);
    goto CPyL11;
CPyL19: ;
    CPy_DecRef(cpy_r_r7.f0);
    CPy_DecRef(cpy_r_r7.f1);
    CPy_DecRef(cpy_r_r7.f2);
    goto CPyL13;
}

PyObject *CPyPy__utils___checksum_or_raise(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"string", 0};
    static CPyArg_Parser parser = {"O:checksum_or_raise", kwlist, 0};
    PyObject *obj_string;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_string)) {
        return NULL;
    }
    PyObject *arg_string;
    if (likely(PyUnicode_Check(obj_string)))
        arg_string = obj_string;
    else {
        CPy_TypeError("str", obj_string); 
        goto fail;
    }
    PyObject *retval = CPyDef__utils___checksum_or_raise(arg_string);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
    return NULL;
}

char CPyDef__utils____type_has_checksum_addr(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_has_checksum_addr;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = CPyStatic__utils____KNOWN_CHECKSUMMED_TYPES;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"_KNOWN_CHECKSUMMED_TYPES\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL25;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = CPyDict_GetWithNone(cpy_r_r0, cpy_r_typ);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL25;
    }
    if (PyBool_Check(cpy_r_r2))
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL2;
    if (cpy_r_r2 == Py_None)
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL2;
    CPy_TypeErrorTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 48, CPyStatic__utils___globals, "bool or None", cpy_r_r2);
    goto CPyL25;
__LL2: ;
    cpy_r_has_checksum_addr = cpy_r_r3;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_has_checksum_addr == cpy_r_r4;
    if (cpy_r_r5) {
        goto CPyL26;
    } else
        goto CPyL23;
CPyL6: ;
    cpy_r_r6 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* frozenset({'Contract', 'ERC20'}) */
    cpy_r_r7 = CPy_GetName(cpy_r_typ);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL25;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 50, CPyStatic__utils___globals, "str", cpy_r_r7);
        goto CPyL25;
    }
    cpy_r_r9 = PySet_Contains(cpy_r_r6, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL25;
    }
    cpy_r_r11 = cpy_r_r9;
    if (cpy_r_r11) goto CPyL11;
    cpy_r_r12 = cpy_r_r11;
    goto CPyL18;
CPyL11: ;
    cpy_r_r13 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* frozenset({'brownie', 'y', 'dank_mids'}) */
    cpy_r_r14 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__module__' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_typ, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL25;
    }
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 50, CPyStatic__utils___globals, "str", cpy_r_r15);
        goto CPyL25;
    }
    cpy_r_r17 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '.' */
    cpy_r_r18 = PyUnicode_Split(cpy_r_r16, cpy_r_r17, -1);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL25;
    }
    cpy_r_r19 = CPyList_GetItemShort(cpy_r_r18, 0);
    CPy_DECREF_NO_IMM(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL25;
    }
    if (likely(PyUnicode_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 50, CPyStatic__utils___globals, "str", cpy_r_r19);
        goto CPyL25;
    }
    cpy_r_r21 = PySet_Contains(cpy_r_r13, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL25;
    }
    cpy_r_r23 = cpy_r_r21;
    cpy_r_r12 = cpy_r_r23;
CPyL18: ;
    cpy_r_r24 = cpy_r_r12 ? Py_True : Py_False;
    cpy_r_has_checksum_addr = cpy_r_r24;
    if (unlikely(!PyBool_Check(cpy_r_has_checksum_addr))) {
        CPy_TypeError("bool", cpy_r_has_checksum_addr); cpy_r_r25 = 2;
    } else
        cpy_r_r25 = cpy_r_has_checksum_addr == Py_True;
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL27;
    }
    cpy_r_r26 = CPyStatic__utils____KNOWN_CHECKSUMMED_TYPES;
    if (unlikely(cpy_r_r26 == NULL)) {
        goto CPyL28;
    } else
        goto CPyL22;
CPyL20: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_KNOWN_CHECKSUMMED_TYPES\" was not set");
    cpy_r_r27 = 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL25;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r28 = cpy_r_r25 ? Py_True : Py_False;
    cpy_r_r29 = CPyDict_SetItem(cpy_r_r26, cpy_r_typ, cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL27;
    }
CPyL23: ;
    if (unlikely(!PyBool_Check(cpy_r_has_checksum_addr))) {
        CPy_TypeError("bool", cpy_r_has_checksum_addr); cpy_r_r31 = 2;
    } else
        cpy_r_r31 = cpy_r_has_checksum_addr == Py_True;
    CPy_DECREF(cpy_r_has_checksum_addr);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL25;
    }
    return cpy_r_r31;
CPyL25: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
CPyL26: ;
    CPy_DECREF(cpy_r_has_checksum_addr);
    goto CPyL6;
CPyL27: ;
    CPy_DecRef(cpy_r_has_checksum_addr);
    goto CPyL25;
CPyL28: ;
    CPy_DecRef(cpy_r_has_checksum_addr);
    goto CPyL20;
}

PyObject *CPyPy__utils____type_has_checksum_addr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:_type_has_checksum_addr", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ = obj_typ;
    char retval = CPyDef__utils____type_has_checksum_addr(arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
    return NULL;
}

char CPyDef__utils_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r9;
    void *cpy_r_r11;
    void *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", -1, CPyStatic__utils___globals);
        goto CPyL12;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('TYPE_CHECKING', 'Any', 'Final', 'Union') */
    cpy_r_r6 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r7 = CPyStatic__utils___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL12;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_cchecksum;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {9};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* (('cchecksum', 'cchecksum', 'cchecksum'),) */
    cpy_r_r15 = CPyStatic__utils___globals;
    cpy_r_r16 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'checksum_dict/_utils.py' */
    cpy_r_r17 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL12;
    cpy_r_r19 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('ChecksumAddress',) */
    cpy_r_r20 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'eth_typing' */
    cpy_r_r21 = CPyStatic__utils___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL12;
    }
    CPyModule_eth_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = PyDict_New();
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL12;
    }
    CPyStatic__utils____KNOWN_CHECKSUMMED_TYPES = cpy_r_r23;
    CPy_INCREF(CPyStatic__utils____KNOWN_CHECKSUMMED_TYPES);
    cpy_r_r24 = CPyStatic__utils___globals;
    cpy_r_r25 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_KNOWN_CHECKSUMMED_TYPES' */
    cpy_r_r26 = CPyDict_SetItem(cpy_r_r24, cpy_r_r25, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL12;
    }
    cpy_r_r28 = CPyModule_cchecksum;
    cpy_r_r29 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'to_checksum_address' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL12;
    }
    cpy_r_r31 = CPyStatic__utils___globals;
    cpy_r_r32 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'to_checksum_address' */
    cpy_r_r33 = CPyDict_SetItem(cpy_r_r31, cpy_r_r32, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic__utils___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r35 = 2;
    return cpy_r_r35;
}

static int
base___ChecksumAddressDict_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return CPyPy_base___ChecksumAddressDict_____init__(self, args, kwds) != NULL ? 0 : -1;
}
static PyObject *CPyDunder___getitem__base___ChecksumAddressDict(PyObject *obj_self, PyObject *obj_key) {
    PyObject *arg_self;
    if (likely(PyDict_Check(obj_self)))
        arg_self = obj_self;
    else {
        CPy_TypeError("dict", obj_self); 
        return NULL;
    }
    PyObject *arg_key;
    if (PyBytes_Check(obj_key) || PyByteArray_Check(obj_key))
        arg_key = obj_key;
    else {
        arg_key = NULL;
    }
    if (arg_key != NULL) goto __LL3;
    if (PyUnicode_Check(obj_key))
        arg_key = obj_key;
    else {
        arg_key = NULL;
    }
    if (arg_key != NULL) goto __LL3;
    arg_key = obj_key;
    if (arg_key != NULL) goto __LL3;
    CPy_TypeError("union[bytes, str, object]", obj_key); 
    return NULL;
__LL3: ;
    return CPyDef_base___ChecksumAddressDict_____getitem__(arg_self, arg_key);
}
static int CPyDunder___setitem__base___ChecksumAddressDict(PyObject *obj_self, PyObject *obj_key, PyObject *obj_value) {
    if (obj_value == NULL) {
        PyObject *super = CPy_Super(CPyModule_builtins, obj_self);
        if (super == NULL) return -1;
        PyObject *result = PyObject_CallMethod(super, "__delitem__", "O", obj_key);
        Py_DECREF(super);
        Py_XDECREF(result);
        return result == NULL ? -1 : 0;
    }
    PyObject *arg_self;
    if (likely(PyDict_Check(obj_self)))
        arg_self = obj_self;
    else {
        CPy_TypeError("dict", obj_self); 
        goto fail;
    }
    PyObject *arg_key;
    if (PyBytes_Check(obj_key) || PyByteArray_Check(obj_key))
        arg_key = obj_key;
    else {
        arg_key = NULL;
    }
    if (arg_key != NULL) goto __LL4;
    if (PyUnicode_Check(obj_key))
        arg_key = obj_key;
    else {
        arg_key = NULL;
    }
    if (arg_key != NULL) goto __LL4;
    arg_key = obj_key;
    if (arg_key != NULL) goto __LL4;
    CPy_TypeError("union[bytes, str, object]", obj_key); 
    goto fail;
__LL4: ;
    PyObject *arg_value = obj_value;
    char val = CPyDef_base___ChecksumAddressDict_____setitem__(arg_self, arg_key, arg_value);
    if (val == 2) {
        goto fail;
    }
    return 0;
fail: ;
    return -1;
}
static PyMappingMethods base___ChecksumAddressDict_as_mapping = {
    .mp_subscript = CPyDunder___getitem__base___ChecksumAddressDict,
    .mp_ass_subscript = CPyDunder___setitem__base___ChecksumAddressDict,
};

static PyGetSetDef base___ChecksumAddressDict_getseters[] = {
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef base___ChecksumAddressDict_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_base___ChecksumAddressDict_____init__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__init__($self, seed=None)\n--\n\n")},
    {"__repr__",
     (PyCFunction)CPyPy_base___ChecksumAddressDict_____repr__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__repr__($self, /)\n--\n\n")},
    {"__getitem__",
     (PyCFunction)CPyPy_base___ChecksumAddressDict_____getitem__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__getitem__($self, key, /)\n--\n\n")},
    {"__setitem__",
     (PyCFunction)CPyPy_base___ChecksumAddressDict_____setitem__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__setitem__($self, key, value, /)\n--\n\n")},
    {"_getitem_nochecksum",
     (PyCFunction)CPyPy_base___ChecksumAddressDict____getitem_nochecksum,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_getitem_nochecksum($self, key)\n--\n\n")},
    {"_setitem_nochecksum",
     (PyCFunction)CPyPy_base___ChecksumAddressDict____setitem_nochecksum,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_setitem_nochecksum($self, key, value)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_base___ChecksumAddressDict_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ChecksumAddressDict",
    .tp_getset = base___ChecksumAddressDict_getseters,
    .tp_methods = base___ChecksumAddressDict_methods,
    .tp_init = base___ChecksumAddressDict_init,
    .tp_repr = CPyDef_base___ChecksumAddressDict_____repr__,
    .tp_as_mapping = &base___ChecksumAddressDict_as_mapping,
    .tp_basicsize = sizeof(PyDictObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("ChecksumAddressDict(seed=None)\n--\n\n"),
};
static PyTypeObject *CPyType_base___ChecksumAddressDict_template = &CPyType_base___ChecksumAddressDict_template_;

static PyMethodDef basemodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

int CPyExec_checksum_dict___base(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_checksum_dict___base__internal, "__name__");
    CPyStatic_base___globals = PyModule_GetDict(CPyModule_checksum_dict___base__internal);
    if (unlikely(CPyStatic_base___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_base_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_checksum_dict___base__internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_base___ChecksumAddressDict);
    return -1;
}
static struct PyModuleDef basemodule = {
    PyModuleDef_HEAD_INIT,
    "checksum_dict.base",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    basemodule_methods,
    NULL,
};

PyObject *CPyInit_checksum_dict___base(void)
{
    if (CPyModule_checksum_dict___base__internal) {
        Py_INCREF(CPyModule_checksum_dict___base__internal);
        return CPyModule_checksum_dict___base__internal;
    }
    CPyModule_checksum_dict___base__internal = PyModule_Create(&basemodule);
    if (unlikely(CPyModule_checksum_dict___base__internal == NULL))
        goto fail;
    if (CPyExec_checksum_dict___base(CPyModule_checksum_dict___base__internal) != 0)
        goto fail;
    return CPyModule_checksum_dict___base__internal;
    fail:
    return NULL;
}

char CPyDef_base___ChecksumAddressDict_____init__(PyObject *cpy_r_self, PyObject *cpy_r_seed) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    int64_t cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T4CIOO cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_key;
    PyObject *cpy_r_value;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    tuple_T2OO cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    if (cpy_r_seed != NULL) goto CPyL19;
    cpy_r_r0 = Py_None;
    cpy_r_seed = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = PyDict_Check(cpy_r_seed);
    if (!cpy_r_r1) goto CPyL9;
    if (likely(PyDict_Check(cpy_r_seed)))
        cpy_r_r2 = cpy_r_seed;
    else {
        CPy_TypeErrorTraceback("checksum_dict/base.py", "__init__", 62, CPyStatic_base___globals, "dict", cpy_r_seed);
        goto CPyL18;
    }
    cpy_r_r3 = 0;
    cpy_r_r4 = PyDict_Size(cpy_r_r2);
    cpy_r_r5 = CPyDict_GetItemsIter(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL20;
    }
CPyL5: ;
    cpy_r_r6 = CPyDict_NextItem(cpy_r_r5, cpy_r_r3);
    cpy_r_r7 = cpy_r_r6.f1;
    cpy_r_r3 = cpy_r_r7;
    cpy_r_r8 = cpy_r_r6.f0;
    if (!cpy_r_r8) goto CPyL21;
    cpy_r_r9 = cpy_r_r6.f2;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = cpy_r_r6.f3;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r6.f2);
    CPy_DECREF(cpy_r_r6.f3);
    cpy_r_key = cpy_r_r9;
    cpy_r_value = cpy_r_r10;
    cpy_r_r11 = CPyDict_SetItem(cpy_r_self, cpy_r_key, cpy_r_value);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_value);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("checksum_dict/base.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL22;
    }
    cpy_r_r13 = CPyDict_CheckSize(cpy_r_r2, cpy_r_r4);
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("checksum_dict/base.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL22;
    } else
        goto CPyL5;
CPyL8: ;
    cpy_r_r14 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("checksum_dict/base.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL18;
    } else
        goto CPyL17;
CPyL9: ;
    cpy_r_r15 = CPyStatic_base___globals;
    cpy_r_r16 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Iterable' */
    cpy_r_r17 = CPyDict_GetItem(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL23;
    }
    cpy_r_r18 = PyObject_IsInstance(cpy_r_seed, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("checksum_dict/base.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL23;
    }
    cpy_r_r20 = cpy_r_r18;
    if (!cpy_r_r20) goto CPyL24;
    cpy_r_r21 = PyObject_GetIter(cpy_r_seed);
    CPy_DECREF(cpy_r_seed);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL18;
    }
CPyL13: ;
    cpy_r_r22 = PyIter_Next(cpy_r_r21);
    if (cpy_r_r22 == NULL) goto CPyL25;
    PyObject *__tmp5;
    if (unlikely(!(PyTuple_Check(cpy_r_r22) && PyTuple_GET_SIZE(cpy_r_r22) == 2))) {
        __tmp5 = NULL;
        goto __LL6;
    }
    if (PyBytes_Check(PyTuple_GET_ITEM(cpy_r_r22, 0)) || PyByteArray_Check(PyTuple_GET_ITEM(cpy_r_r22, 0)))
        __tmp5 = PyTuple_GET_ITEM(cpy_r_r22, 0);
    else {
        __tmp5 = NULL;
    }
    if (__tmp5 != NULL) goto __LL7;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r22, 0)))
        __tmp5 = PyTuple_GET_ITEM(cpy_r_r22, 0);
    else {
        __tmp5 = NULL;
    }
    if (__tmp5 != NULL) goto __LL7;
    __tmp5 = PyTuple_GET_ITEM(cpy_r_r22, 0);
    if (__tmp5 != NULL) goto __LL7;
    __tmp5 = NULL;
__LL7: ;
    if (__tmp5 == NULL) goto __LL6;
    __tmp5 = PyTuple_GET_ITEM(cpy_r_r22, 1);
    if (__tmp5 == NULL) goto __LL6;
    __tmp5 = cpy_r_r22;
__LL6: ;
    if (unlikely(__tmp5 == NULL)) {
        CPy_TypeError("tuple[union[bytes, str, object], object]", cpy_r_r22); cpy_r_r23 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8 = PyTuple_GET_ITEM(cpy_r_r22, 0);
        CPy_INCREF(__tmp8);
        PyObject *__tmp9;
        if (PyBytes_Check(__tmp8) || PyByteArray_Check(__tmp8))
            __tmp9 = __tmp8;
        else {
            __tmp9 = NULL;
        }
        if (__tmp9 != NULL) goto __LL10;
        if (PyUnicode_Check(__tmp8))
            __tmp9 = __tmp8;
        else {
            __tmp9 = NULL;
        }
        if (__tmp9 != NULL) goto __LL10;
        __tmp9 = __tmp8;
        if (__tmp9 != NULL) goto __LL10;
        CPy_TypeError("union[bytes, str, object]", __tmp8); 
        __tmp9 = NULL;
__LL10: ;
        cpy_r_r23.f0 = __tmp9;
        PyObject *__tmp11 = PyTuple_GET_ITEM(cpy_r_r22, 1);
        CPy_INCREF(__tmp11);
        PyObject *__tmp12;
        __tmp12 = __tmp11;
        cpy_r_r23.f1 = __tmp12;
    }
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23.f0 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL26;
    }
    cpy_r_r24 = cpy_r_r23.f0;
    CPy_INCREF(cpy_r_r24);
    cpy_r_key = cpy_r_r24;
    cpy_r_r25 = cpy_r_r23.f1;
    CPy_INCREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r23.f0);
    CPy_DECREF(cpy_r_r23.f1);
    cpy_r_value = cpy_r_r25;
    cpy_r_r26 = CPyDict_SetItem(cpy_r_self, cpy_r_key, cpy_r_value);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_value);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("checksum_dict/base.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL26;
    } else
        goto CPyL13;
CPyL16: ;
    cpy_r_r28 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("checksum_dict/base.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL18;
    }
CPyL17: ;
    return 1;
CPyL18: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
CPyL19: ;
    CPy_INCREF(cpy_r_seed);
    goto CPyL2;
CPyL20: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL18;
CPyL21: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6.f2);
    CPy_DECREF(cpy_r_r6.f3);
    goto CPyL8;
CPyL22: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_seed);
    goto CPyL18;
CPyL24: ;
    CPy_DECREF(cpy_r_seed);
    goto CPyL17;
CPyL25: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL16;
CPyL26: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL18;
}

PyObject *CPyPy_base___ChecksumAddressDict_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"seed", 0};
    PyObject *obj_seed = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "|O", "__init__", kwlist, &obj_seed)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyDict_Check(obj_self)))
        arg_self = obj_self;
    else {
        CPy_TypeError("dict", obj_self); 
        goto fail;
    }
    PyObject *arg_seed;
    if (obj_seed == NULL) {
        arg_seed = NULL;
        goto __LL13;
    }
    if (PyDict_Check(obj_seed))
        arg_seed = obj_seed;
    else {
        arg_seed = NULL;
    }
    if (arg_seed != NULL) goto __LL13;
    arg_seed = obj_seed;
    if (arg_seed != NULL) goto __LL13;
    if (obj_seed == Py_None)
        arg_seed = obj_seed;
    else {
        arg_seed = NULL;
    }
    if (arg_seed != NULL) goto __LL13;
    CPy_TypeError("union[dict, object, None]", obj_seed); 
    goto fail;
__LL13: ;
    char retval = CPyDef_base___ChecksumAddressDict_____init__(arg_self, arg_seed);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("checksum_dict/base.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
    return NULL;
}

char CPyDef_base___ChecksumAddressDict_____init___3__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_seed) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__init__' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_self, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL10;
    cpy_r_r2 = PyList_New(0);
    if (cpy_r_r2 == NULL) goto CPyL11;
    cpy_r_r3 = PyDict_New();
    if (cpy_r_r3 == NULL) goto CPyL12;
    cpy_r_r4 = 0;
    if (cpy_r_seed == NULL) goto CPyL5;
    cpy_r_r5 = PyList_Append(cpy_r_r2, cpy_r_seed);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (!cpy_r_r6) {
        goto CPyL13;
    } else
        goto CPyL6;
CPyL5: ;
    cpy_r_r4 = 1;
CPyL6: ;
    cpy_r_r7 = PyList_AsTuple(cpy_r_r2);
    CPy_DECREF_NO_IMM(cpy_r_r2);
    if (cpy_r_r7 == NULL) goto CPyL14;
    cpy_r_r8 = PyObject_Call(cpy_r_r1, cpy_r_r7, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r8 == NULL) goto CPyL10;
    if (unlikely(cpy_r_r8 != Py_None)) {
        CPy_TypeError("None", cpy_r_r8); cpy_r_r9 = 2;
    } else
        cpy_r_r9 = 1;
    CPy_DECREF(cpy_r_r8);
    if (cpy_r_r9 == 2) goto CPyL10;
    return cpy_r_r9;
CPyL10: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL11: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL10;
CPyL12: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    goto CPyL10;
CPyL14: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    goto CPyL10;
}

PyObject *CPyPy_base___ChecksumAddressDict_____init___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"seed", 0};
    static CPyArg_Parser parser = {"|O:__init____ChecksumAddressDict_glue", kwlist, 0};
    PyObject *obj_seed = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_seed)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_base___ChecksumAddressDict)))
        arg_self = obj_self;
    else {
        CPy_TypeError("checksum_dict.base.ChecksumAddressDict", obj_self); 
        goto fail;
    }
    PyObject *arg_seed;
    if (obj_seed == NULL) {
        arg_seed = NULL;
        goto __LL14;
    }
    if (PyDict_Check(obj_seed))
        arg_seed = obj_seed;
    else {
        arg_seed = NULL;
    }
    if (arg_seed != NULL) goto __LL14;
    arg_seed = obj_seed;
    if (arg_seed != NULL) goto __LL14;
    if (obj_seed == Py_None)
        arg_seed = obj_seed;
    else {
        arg_seed = NULL;
    }
    if (arg_seed != NULL) goto __LL14;
    CPy_TypeError("union[dict, object, None]", obj_seed); 
    goto fail;
__LL14: ;
    char retval = CPyDef_base___ChecksumAddressDict_____init___3__ChecksumAddressDict_glue(arg_self, arg_seed);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("checksum_dict/base.py", "__init____ChecksumAddressDict_glue", -1, CPyStatic_base___globals);
    return NULL;
}

PyObject *CPyDef_base___ChecksumAddressDict_____repr__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'ChecksumAddressDict(' */
    cpy_r_r1 = PyDict_Copy(cpy_r_self);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "__repr__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL4;
    }
    cpy_r_r2 = PyObject_Str(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "__repr__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL4;
    }
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ')' */
    cpy_r_r4 = CPyStr_Build(3, cpy_r_r0, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "__repr__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL4;
    }
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_base___ChecksumAddressDict_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyDict_Check(obj_self)))
        arg_self = obj_self;
    else {
        CPy_TypeError("dict", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_base___ChecksumAddressDict_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict/base.py", "__repr__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
    return NULL;
}

PyObject *CPyDef_base___ChecksumAddressDict_____repr___3__ChecksumAddressDict_glue(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__repr__' */
    PyObject *cpy_r_r1[1] = {cpy_r_self};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyUnicode_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("str", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_base___ChecksumAddressDict_____repr___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr____ChecksumAddressDict_glue", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_base___ChecksumAddressDict)))
        arg_self = obj_self;
    else {
        CPy_TypeError("checksum_dict.base.ChecksumAddressDict", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_base___ChecksumAddressDict_____repr___3__ChecksumAddressDict_glue(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict/base.py", "__repr____ChecksumAddressDict_glue", -1, CPyStatic_base___globals);
    return NULL;
}

PyObject *CPyDef_base___ChecksumAddressDict_____getitem__(PyObject *cpy_r_self, PyObject *cpy_r_key) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T3OOO cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    tuple_T3OOO cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    cpy_r_r0 = (PyObject *)&PyDict_Type;
    cpy_r_r1 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__getitem__' */
    PyObject *cpy_r_r2[3] = {cpy_r_r0, cpy_r_self, cpy_r_key};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = CPy_CatchError();
    cpy_r_r6 = CPyModule_builtins;
    cpy_r_r7 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'KeyError' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL8;
    }
    cpy_r_r9 = CPy_ExceptionMatches(cpy_r_r8);
    CPy_DecRef(cpy_r_r8);
    if (cpy_r_r9) goto CPyL7;
    CPy_Reraise();
    if (!0) {
        goto CPyL8;
    } else
        goto CPyL27;
CPyL6: ;
    CPy_Unreachable();
CPyL7: ;
    CPy_RestoreExcInfo(cpy_r_r5);
    CPy_DecRef(cpy_r_r5.f0);
    CPy_DecRef(cpy_r_r5.f1);
    CPy_DecRef(cpy_r_r5.f2);
    goto CPyL10;
CPyL8: ;
    CPy_RestoreExcInfo(cpy_r_r5);
    CPy_DecRef(cpy_r_r5.f0);
    CPy_DecRef(cpy_r_r5.f1);
    CPy_DecRef(cpy_r_r5.f2);
    cpy_r_r10 = CPy_KeepPropagating();
    if (!cpy_r_r10) goto CPyL26;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r11 = (PyObject *)&PyDict_Type;
    cpy_r_r12 = CPyDef__utils___attempt_checksum(cpy_r_key);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL13;
    }
    cpy_r_r13 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__getitem__' */
    PyObject *cpy_r_r14[3] = {cpy_r_r11, cpy_r_self, cpy_r_r12};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_VectorcallMethod(cpy_r_r13, cpy_r_r15, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL28;
    }
    CPy_DecRef(cpy_r_r12);
    return cpy_r_r16;
CPyL13: ;
    cpy_r_r17 = CPy_CatchError();
    cpy_r_r18 = CPyModule_builtins;
    cpy_r_r19 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'KeyError' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL24;
    }
    cpy_r_r21 = CPy_ExceptionMatches(cpy_r_r20);
    CPy_DecRef(cpy_r_r20);
    if (!cpy_r_r21) goto CPyL22;
    cpy_r_r22 = CPy_GetExcValue();
    cpy_r_r23 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'args' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    CPy_DecRef(cpy_r_r22);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL24;
    }
    if (likely(PyTuple_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("checksum_dict/base.py", "__getitem__", 83, CPyStatic_base___globals, "tuple", cpy_r_r24);
        goto CPyL24;
    }
    cpy_r_r26 = CPyStatic_base___globals;
    cpy_r_r27 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'exceptions' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL29;
    }
    cpy_r_r29 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'KeyError' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    CPy_DecRef(cpy_r_r28);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL29;
    }
    cpy_r_r31 = PyObject_CallObject(cpy_r_r30, cpy_r_r25);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r25);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL24;
    }
    CPy_Raise(cpy_r_r31);
    CPy_DecRef(cpy_r_r31);
    if (unlikely(!0)) {
        CPy_AddTraceback("checksum_dict/base.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL24;
    } else
        goto CPyL30;
CPyL21: ;
    CPy_Unreachable();
CPyL22: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL24;
    } else
        goto CPyL31;
CPyL23: ;
    CPy_Unreachable();
CPyL24: ;
    CPy_RestoreExcInfo(cpy_r_r17);
    CPy_DecRef(cpy_r_r17.f0);
    CPy_DecRef(cpy_r_r17.f1);
    CPy_DecRef(cpy_r_r17.f2);
    cpy_r_r32 = CPy_KeepPropagating();
    if (!cpy_r_r32) goto CPyL26;
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
CPyL27: ;
    CPy_DecRef(cpy_r_r5.f0);
    CPy_DecRef(cpy_r_r5.f1);
    CPy_DecRef(cpy_r_r5.f2);
    goto CPyL6;
CPyL28: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL13;
CPyL29: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL24;
CPyL30: ;
    CPy_DecRef(cpy_r_r17.f0);
    CPy_DecRef(cpy_r_r17.f1);
    CPy_DecRef(cpy_r_r17.f2);
    goto CPyL21;
CPyL31: ;
    CPy_DecRef(cpy_r_r17.f0);
    CPy_DecRef(cpy_r_r17.f1);
    CPy_DecRef(cpy_r_r17.f2);
    goto CPyL23;
}

PyObject *CPyPy_base___ChecksumAddressDict_____getitem__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", 0};
    static CPyArg_Parser parser = {"O:__getitem__", kwlist, 0};
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_key)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyDict_Check(obj_self)))
        arg_self = obj_self;
    else {
        CPy_TypeError("dict", obj_self); 
        goto fail;
    }
    PyObject *arg_key;
    if (PyBytes_Check(obj_key) || PyByteArray_Check(obj_key))
        arg_key = obj_key;
    else {
        arg_key = NULL;
    }
    if (arg_key != NULL) goto __LL15;
    if (PyUnicode_Check(obj_key))
        arg_key = obj_key;
    else {
        arg_key = NULL;
    }
    if (arg_key != NULL) goto __LL15;
    arg_key = obj_key;
    if (arg_key != NULL) goto __LL15;
    CPy_TypeError("union[bytes, str, object]", obj_key); 
    goto fail;
__LL15: ;
    PyObject *retval = CPyDef_base___ChecksumAddressDict_____getitem__(arg_self, arg_key);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict/base.py", "__getitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
    return NULL;
}

PyObject *CPyDef_base___ChecksumAddressDict_____getitem___3__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__getitem__' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_key};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_base___ChecksumAddressDict_____getitem___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", 0};
    static CPyArg_Parser parser = {"O:__getitem____ChecksumAddressDict_glue", kwlist, 0};
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_key)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_base___ChecksumAddressDict)))
        arg_self = obj_self;
    else {
        CPy_TypeError("checksum_dict.base.ChecksumAddressDict", obj_self); 
        goto fail;
    }
    PyObject *arg_key;
    if (PyBytes_Check(obj_key) || PyByteArray_Check(obj_key))
        arg_key = obj_key;
    else {
        arg_key = NULL;
    }
    if (arg_key != NULL) goto __LL16;
    if (PyUnicode_Check(obj_key))
        arg_key = obj_key;
    else {
        arg_key = NULL;
    }
    if (arg_key != NULL) goto __LL16;
    arg_key = obj_key;
    if (arg_key != NULL) goto __LL16;
    CPy_TypeError("union[bytes, str, object]", obj_key); 
    goto fail;
__LL16: ;
    PyObject *retval = CPyDef_base___ChecksumAddressDict_____getitem___3__ChecksumAddressDict_glue(arg_self, arg_key);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict/base.py", "__getitem____ChecksumAddressDict_glue", -1, CPyStatic_base___globals);
    return NULL;
}

char CPyDef_base___ChecksumAddressDict_____setitem__(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value) {
    int32_t cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = PyDict_Contains(cpy_r_self, cpy_r_key);
    cpy_r_r1 = cpy_r_r0 >= 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("checksum_dict/base.py", "__setitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL7;
    }
    cpy_r_r2 = cpy_r_r0;
    if (!cpy_r_r2) goto CPyL3;
    cpy_r_r3 = (PyObject *)&PyDict_Type;
    cpy_r_r4 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__setitem__' */
    PyObject *cpy_r_r5[4] = {cpy_r_r3, cpy_r_self, cpy_r_key, cpy_r_value};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775812ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "__setitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL7;
    } else
        goto CPyL8;
CPyL3: ;
    cpy_r_r8 = (PyObject *)&PyDict_Type;
    cpy_r_r9 = CPyDef__utils___attempt_checksum(cpy_r_key);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "__setitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL7;
    }
    cpy_r_r10 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__setitem__' */
    PyObject *cpy_r_r11[4] = {cpy_r_r8, cpy_r_self, cpy_r_r9, cpy_r_value};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = PyObject_VectorcallMethod(cpy_r_r10, cpy_r_r12, 9223372036854775812ULL, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "__setitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL9;
    } else
        goto CPyL10;
CPyL5: ;
    CPy_DECREF(cpy_r_r9);
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL8: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL7;
CPyL10: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL5;
}

PyObject *CPyPy_base___ChecksumAddressDict_____setitem__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", "value", 0};
    static CPyArg_Parser parser = {"OO:__setitem__", kwlist, 0};
    PyObject *obj_key;
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_key, &obj_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyDict_Check(obj_self)))
        arg_self = obj_self;
    else {
        CPy_TypeError("dict", obj_self); 
        goto fail;
    }
    PyObject *arg_key;
    if (PyBytes_Check(obj_key) || PyByteArray_Check(obj_key))
        arg_key = obj_key;
    else {
        arg_key = NULL;
    }
    if (arg_key != NULL) goto __LL17;
    if (PyUnicode_Check(obj_key))
        arg_key = obj_key;
    else {
        arg_key = NULL;
    }
    if (arg_key != NULL) goto __LL17;
    arg_key = obj_key;
    if (arg_key != NULL) goto __LL17;
    CPy_TypeError("union[bytes, str, object]", obj_key); 
    goto fail;
__LL17: ;
    PyObject *arg_value = obj_value;
    char retval = CPyDef_base___ChecksumAddressDict_____setitem__(arg_self, arg_key, arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("checksum_dict/base.py", "__setitem__", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
    return NULL;
}

char CPyDef_base___ChecksumAddressDict_____setitem___3__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__setitem__' */
    PyObject *cpy_r_r1[3] = {cpy_r_self, cpy_r_key, cpy_r_value};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775811ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (unlikely(cpy_r_r3 != Py_None)) {
        CPy_TypeError("None", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4 == 2) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_base___ChecksumAddressDict_____setitem___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", "value", 0};
    static CPyArg_Parser parser = {"OO:__setitem____ChecksumAddressDict_glue", kwlist, 0};
    PyObject *obj_key;
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_key, &obj_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_base___ChecksumAddressDict)))
        arg_self = obj_self;
    else {
        CPy_TypeError("checksum_dict.base.ChecksumAddressDict", obj_self); 
        goto fail;
    }
    PyObject *arg_key;
    if (PyBytes_Check(obj_key) || PyByteArray_Check(obj_key))
        arg_key = obj_key;
    else {
        arg_key = NULL;
    }
    if (arg_key != NULL) goto __LL18;
    if (PyUnicode_Check(obj_key))
        arg_key = obj_key;
    else {
        arg_key = NULL;
    }
    if (arg_key != NULL) goto __LL18;
    arg_key = obj_key;
    if (arg_key != NULL) goto __LL18;
    CPy_TypeError("union[bytes, str, object]", obj_key); 
    goto fail;
__LL18: ;
    PyObject *arg_value = obj_value;
    char retval = CPyDef_base___ChecksumAddressDict_____setitem___3__ChecksumAddressDict_glue(arg_self, arg_key, arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("checksum_dict/base.py", "__setitem____ChecksumAddressDict_glue", -1, CPyStatic_base___globals);
    return NULL;
}

PyObject *CPyDef_base___ChecksumAddressDict____getitem_nochecksum(PyObject *cpy_r_self, PyObject *cpy_r_key) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = (PyObject *)&PyDict_Type;
    cpy_r_r1 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__getitem__' */
    PyObject *cpy_r_r2[3] = {cpy_r_r0, cpy_r_self, cpy_r_key};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "_getitem_nochecksum", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL2;
    }
    return cpy_r_r4;
CPyL2: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_base___ChecksumAddressDict____getitem_nochecksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", 0};
    static CPyArg_Parser parser = {"O:_getitem_nochecksum", kwlist, 0};
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_key)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyDict_Check(obj_self)))
        arg_self = obj_self;
    else {
        CPy_TypeError("dict", obj_self); 
        goto fail;
    }
    PyObject *arg_key;
    if (likely(PyUnicode_Check(obj_key)))
        arg_key = obj_key;
    else {
        CPy_TypeError("str", obj_key); 
        goto fail;
    }
    PyObject *retval = CPyDef_base___ChecksumAddressDict____getitem_nochecksum(arg_self, arg_key);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict/base.py", "_getitem_nochecksum", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
    return NULL;
}

PyObject *CPyDef_base___ChecksumAddressDict____getitem_nochecksum__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_getitem_nochecksum' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_key};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_base___ChecksumAddressDict____getitem_nochecksum__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", 0};
    static CPyArg_Parser parser = {"O:_getitem_nochecksum__ChecksumAddressDict_glue", kwlist, 0};
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_key)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_base___ChecksumAddressDict)))
        arg_self = obj_self;
    else {
        CPy_TypeError("checksum_dict.base.ChecksumAddressDict", obj_self); 
        goto fail;
    }
    PyObject *arg_key;
    if (likely(PyUnicode_Check(obj_key)))
        arg_key = obj_key;
    else {
        CPy_TypeError("str", obj_key); 
        goto fail;
    }
    PyObject *retval = CPyDef_base___ChecksumAddressDict____getitem_nochecksum__ChecksumAddressDict_glue(arg_self, arg_key);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict/base.py", "_getitem_nochecksum__ChecksumAddressDict_glue", -1, CPyStatic_base___globals);
    return NULL;
}

char CPyDef_base___ChecksumAddressDict____setitem_nochecksum(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    int64_t cpy_r_r3;
    char cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '0x' */
    cpy_r_r1 = CPyStr_Startswith(cpy_r_key, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1;
    if (!cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStr_Size_size_t(cpy_r_key);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("checksum_dict/base.py", "_setitem_nochecksum", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL10;
    }
    cpy_r_r5 = cpy_r_r3 << 1;
    cpy_r_r6 = cpy_r_r5 != 84;
    if (!cpy_r_r6) goto CPyL8;
CPyL3: ;
    cpy_r_r7 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* "'" */
    cpy_r_r8 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* "' is not a valid ETH address" */
    cpy_r_r9 = CPyStr_Build(3, cpy_r_r7, cpy_r_key, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "_setitem_nochecksum", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL10;
    }
    cpy_r_r10 = CPyModule_builtins;
    cpy_r_r11 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'ValueError' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "_setitem_nochecksum", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL11;
    }
    PyObject *cpy_r_r13[1] = {cpy_r_r9};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_Vectorcall(cpy_r_r12, cpy_r_r14, 1, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "_setitem_nochecksum", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL11;
    }
    CPy_DECREF(cpy_r_r9);
    CPy_Raise(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(!0)) {
        CPy_AddTraceback("checksum_dict/base.py", "_setitem_nochecksum", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL10;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r16 = (PyObject *)&PyDict_Type;
    cpy_r_r17 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__setitem__' */
    PyObject *cpy_r_r18[4] = {cpy_r_r16, cpy_r_self, cpy_r_key, cpy_r_value};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = PyObject_VectorcallMethod(cpy_r_r17, cpy_r_r19, 9223372036854775812ULL, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "_setitem_nochecksum", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL10;
    } else
        goto CPyL12;
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL11: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL10;
CPyL12: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL9;
}

PyObject *CPyPy_base___ChecksumAddressDict____setitem_nochecksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", "value", 0};
    static CPyArg_Parser parser = {"OO:_setitem_nochecksum", kwlist, 0};
    PyObject *obj_key;
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_key, &obj_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyDict_Check(obj_self)))
        arg_self = obj_self;
    else {
        CPy_TypeError("dict", obj_self); 
        goto fail;
    }
    PyObject *arg_key;
    if (likely(PyUnicode_Check(obj_key)))
        arg_key = obj_key;
    else {
        CPy_TypeError("str", obj_key); 
        goto fail;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef_base___ChecksumAddressDict____setitem_nochecksum(arg_self, arg_key, arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("checksum_dict/base.py", "_setitem_nochecksum", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
    return NULL;
}

char CPyDef_base___ChecksumAddressDict____setitem_nochecksum__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_setitem_nochecksum' */
    PyObject *cpy_r_r1[3] = {cpy_r_self, cpy_r_key, cpy_r_value};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775811ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (unlikely(cpy_r_r3 != Py_None)) {
        CPy_TypeError("None", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4 == 2) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_base___ChecksumAddressDict____setitem_nochecksum__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", "value", 0};
    static CPyArg_Parser parser = {"OO:_setitem_nochecksum__ChecksumAddressDict_glue", kwlist, 0};
    PyObject *obj_key;
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_key, &obj_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_base___ChecksumAddressDict)))
        arg_self = obj_self;
    else {
        CPy_TypeError("checksum_dict.base.ChecksumAddressDict", obj_self); 
        goto fail;
    }
    PyObject *arg_key;
    if (likely(PyUnicode_Check(obj_key)))
        arg_key = obj_key;
    else {
        CPy_TypeError("str", obj_key); 
        goto fail;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef_base___ChecksumAddressDict____setitem_nochecksum__ChecksumAddressDict_glue(arg_self, arg_key, arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("checksum_dict/base.py", "_setitem_nochecksum__ChecksumAddressDict_glue", -1, CPyStatic_base___globals);
    return NULL;
}

char CPyDef_base_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    tuple_T2OO cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    tuple_T2OO cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    tuple_T2OO cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    tuple_T2OO cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", -1, CPyStatic_base___globals);
        goto CPyL33;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('Iterable',) */
    cpy_r_r6 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'collections.abc' */
    cpy_r_r7 = CPyStatic_base___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL33;
    }
    CPyModule_collections___abc = cpy_r_r8;
    CPy_INCREF(CPyModule_collections___abc);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('Optional', 'TypeVar', 'Union', 'overload') */
    cpy_r_r10 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r11 = CPyStatic_base___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL33;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('ChecksumAddress',) */
    cpy_r_r14 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'eth_typing' */
    cpy_r_r15 = CPyStatic_base___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL33;
    }
    CPyModule_eth_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('mypyc_attr',) */
    cpy_r_r18 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypy_extensions' */
    cpy_r_r19 = CPyStatic_base___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL33;
    }
    CPyModule_mypy_extensions = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy_extensions);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('exceptions',) */
    cpy_r_r22 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'checksum_dict' */
    cpy_r_r23 = CPyStatic_base___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL33;
    }
    CPyModule_checksum_dict = cpy_r_r24;
    CPy_INCREF(CPyModule_checksum_dict);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('AnyAddressOrContract',) */
    cpy_r_r26 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'checksum_dict._typing' */
    cpy_r_r27 = CPyStatic_base___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL33;
    }
    CPyModule_checksum_dict____typing = cpy_r_r28;
    CPy_INCREF(CPyModule_checksum_dict____typing);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('attempt_checksum',) */
    cpy_r_r30 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'checksum_dict._utils' */
    cpy_r_r31 = CPyStatic_base___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL33;
    }
    CPyModule_checksum_dict____utils = cpy_r_r32;
    CPy_INCREF(CPyModule_checksum_dict____utils);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'T' */
    cpy_r_r34 = CPyStatic_base___globals;
    cpy_r_r35 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'TypeVar' */
    cpy_r_r36 = CPyDict_GetItem(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL33;
    }
    PyObject *cpy_r_r37[1] = {cpy_r_r33};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = PyObject_Vectorcall(cpy_r_r36, cpy_r_r38, 1, 0);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL33;
    }
    cpy_r_r40 = CPyStatic_base___globals;
    cpy_r_r41 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'T' */
    cpy_r_r42 = CPyDict_SetItem(cpy_r_r40, cpy_r_r41, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL33;
    }
    cpy_r_r44 = CPyStatic_base___globals;
    cpy_r_r45 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Union' */
    cpy_r_r46 = CPyDict_GetItem(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL33;
    }
    cpy_r_r47 = (PyObject *)&PyDict_Type;
    cpy_r_r48 = CPyStatic_base___globals;
    cpy_r_r49 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'AnyAddressOrContract' */
    cpy_r_r50 = CPyDict_GetItem(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL34;
    }
    cpy_r_r51 = CPyStatic_base___globals;
    cpy_r_r52 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'T' */
    cpy_r_r53 = CPyDict_GetItem(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL35;
    }
    cpy_r_r54.f0 = cpy_r_r50;
    cpy_r_r54.f1 = cpy_r_r53;
    cpy_r_r55 = PyTuple_New(2);
    if (unlikely(cpy_r_r55 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp19 = cpy_r_r54.f0;
    PyTuple_SET_ITEM(cpy_r_r55, 0, __tmp19);
    PyObject *__tmp20 = cpy_r_r54.f1;
    PyTuple_SET_ITEM(cpy_r_r55, 1, __tmp20);
    cpy_r_r56 = PyObject_GetItem(cpy_r_r47, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL34;
    }
    cpy_r_r57 = CPyStatic_base___globals;
    cpy_r_r58 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Iterable' */
    cpy_r_r59 = CPyDict_GetItem(cpy_r_r57, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL36;
    }
    cpy_r_r60 = (PyObject *)&PyTuple_Type;
    cpy_r_r61 = CPyStatic_base___globals;
    cpy_r_r62 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'AnyAddressOrContract' */
    cpy_r_r63 = CPyDict_GetItem(cpy_r_r61, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL37;
    }
    cpy_r_r64 = CPyStatic_base___globals;
    cpy_r_r65 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'T' */
    cpy_r_r66 = CPyDict_GetItem(cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL38;
    }
    cpy_r_r67.f0 = cpy_r_r63;
    cpy_r_r67.f1 = cpy_r_r66;
    cpy_r_r68 = PyTuple_New(2);
    if (unlikely(cpy_r_r68 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp21 = cpy_r_r67.f0;
    PyTuple_SET_ITEM(cpy_r_r68, 0, __tmp21);
    PyObject *__tmp22 = cpy_r_r67.f1;
    PyTuple_SET_ITEM(cpy_r_r68, 1, __tmp22);
    cpy_r_r69 = PyObject_GetItem(cpy_r_r60, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL37;
    }
    cpy_r_r70 = PyObject_GetItem(cpy_r_r59, cpy_r_r69);
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL36;
    }
    cpy_r_r71.f0 = cpy_r_r56;
    cpy_r_r71.f1 = cpy_r_r70;
    cpy_r_r72 = PyTuple_New(2);
    if (unlikely(cpy_r_r72 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp23 = cpy_r_r71.f0;
    PyTuple_SET_ITEM(cpy_r_r72, 0, __tmp23);
    PyObject *__tmp24 = cpy_r_r71.f1;
    PyTuple_SET_ITEM(cpy_r_r72, 1, __tmp24);
    cpy_r_r73 = PyObject_GetItem(cpy_r_r46, cpy_r_r72);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL33;
    }
    cpy_r_r74 = CPyStatic_base___globals;
    cpy_r_r75 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_SeedT' */
    cpy_r_r76 = CPyDict_SetItem(cpy_r_r74, cpy_r_r75, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL33;
    }
    cpy_r_r78 = (PyObject *)&PyDict_Type;
    cpy_r_r79 = CPyStatic_base___globals;
    cpy_r_r80 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'ChecksumAddress' */
    cpy_r_r81 = CPyDict_GetItem(cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL33;
    }
    cpy_r_r82 = CPyStatic_base___globals;
    cpy_r_r83 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'T' */
    cpy_r_r84 = CPyDict_GetItem(cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL39;
    }
    cpy_r_r85.f0 = cpy_r_r81;
    cpy_r_r85.f1 = cpy_r_r84;
    cpy_r_r86 = PyTuple_New(2);
    if (unlikely(cpy_r_r86 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp25 = cpy_r_r85.f0;
    PyTuple_SET_ITEM(cpy_r_r86, 0, __tmp25);
    PyObject *__tmp26 = cpy_r_r85.f1;
    PyTuple_SET_ITEM(cpy_r_r86, 1, __tmp26);
    cpy_r_r87 = PyObject_GetItem(cpy_r_r78, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL33;
    }
    cpy_r_r88 = PyTuple_Pack(1, cpy_r_r87);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL33;
    }
    cpy_r_r89 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'checksum_dict.base' */
    cpy_r_r90 = (PyObject *)CPyType_base___ChecksumAddressDict_template;
    cpy_r_r91 = CPyType_FromTemplate(cpy_r_r90, cpy_r_r88, cpy_r_r89);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL33;
    }
    cpy_r_r92 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__mypyc_attrs__' */
    cpy_r_r93 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__dict__' */
    cpy_r_r94 = PyTuple_Pack(1, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL40;
    }
    cpy_r_r95 = PyObject_SetAttr(cpy_r_r91, cpy_r_r92, cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL40;
    }
    CPyType_base___ChecksumAddressDict = (PyTypeObject *)cpy_r_r91;
    CPy_INCREF(CPyType_base___ChecksumAddressDict);
    cpy_r_r97 = CPyStatic_base___globals;
    cpy_r_r98 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'ChecksumAddressDict' */
    cpy_r_r99 = PyDict_SetItem(cpy_r_r97, cpy_r_r98, cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("checksum_dict/base.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_base___globals);
        goto CPyL33;
    }
    return 1;
CPyL33: ;
    cpy_r_r101 = 2;
    return cpy_r_r101;
CPyL34: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL33;
CPyL35: ;
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r50);
    goto CPyL33;
CPyL36: ;
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r56);
    goto CPyL33;
CPyL37: ;
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r59);
    goto CPyL33;
CPyL38: ;
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r63);
    goto CPyL33;
CPyL39: ;
    CPy_DecRef(cpy_r_r81);
    goto CPyL33;
CPyL40: ;
    CPy_DecRef(cpy_r_r91);
    goto CPyL33;
}

static int
default___DefaultChecksumDict_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return CPyPy_default___DefaultChecksumDict_____init__(self, args, kwds) != NULL ? 0 : -1;
}

static PyGetSetDef default___DefaultChecksumDict_getseters[] = {
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef default___DefaultChecksumDict_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_default___DefaultChecksumDict_____init__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__init__($self, default, seed=None)\n--\n\n")},
    {"_getitem_nochecksum",
     (PyCFunction)CPyPy_default___DefaultChecksumDict____getitem_nochecksum,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_getitem_nochecksum($self, key)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_default___DefaultChecksumDict_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "DefaultChecksumDict",
    .tp_getset = default___DefaultChecksumDict_getseters,
    .tp_methods = default___DefaultChecksumDict_methods,
    .tp_init = default___DefaultChecksumDict_init,
    .tp_basicsize = sizeof(PyDictObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("DefaultChecksumDict(default, seed=None)\n--\n\n"),
};
static PyTypeObject *CPyType_default___DefaultChecksumDict_template = &CPyType_default___DefaultChecksumDict_template_;

static PyMethodDef defaultmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

int CPyExec_checksum_dict___default(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_checksum_dict___default__internal, "__name__");
    CPyStatic_default___globals = PyModule_GetDict(CPyModule_checksum_dict___default__internal);
    if (unlikely(CPyStatic_default___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_default_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_checksum_dict___default__internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_default___DefaultChecksumDict);
    return -1;
}
static struct PyModuleDef defaultmodule = {
    PyModuleDef_HEAD_INIT,
    "checksum_dict.default",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    defaultmodule_methods,
    NULL,
};

PyObject *CPyInit_checksum_dict___default(void)
{
    if (CPyModule_checksum_dict___default__internal) {
        Py_INCREF(CPyModule_checksum_dict___default__internal);
        return CPyModule_checksum_dict___default__internal;
    }
    CPyModule_checksum_dict___default__internal = PyModule_Create(&defaultmodule);
    if (unlikely(CPyModule_checksum_dict___default__internal == NULL))
        goto fail;
    if (CPyExec_checksum_dict___default(CPyModule_checksum_dict___default__internal) != 0)
        goto fail;
    return CPyModule_checksum_dict___default__internal;
    fail:
    return NULL;
}

char CPyDef_default___DefaultChecksumDict_____init__(PyObject *cpy_r_self, PyObject *cpy_r_default, PyObject *cpy_r_seed) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    int64_t cpy_r_r11;
    PyObject *cpy_r_r12;
    tuple_T4CIOO cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_key;
    PyObject *cpy_r_value;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    tuple_T2OO cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    if (cpy_r_seed != NULL) goto CPyL21;
    cpy_r_r0 = Py_None;
    cpy_r_seed = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyStatic_default___globals;
    cpy_r_r2 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'defaultdict' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL22;
    }
    cpy_r_r4 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__init__' */
    PyObject *cpy_r_r5[3] = {cpy_r_r3, cpy_r_self, cpy_r_default};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL23;
    } else
        goto CPyL24;
CPyL4: ;
    CPy_DECREF(cpy_r_r3);
    cpy_r_r8 = PyDict_Check(cpy_r_seed);
    if (!cpy_r_r8) goto CPyL11;
    if (likely(PyDict_Check(cpy_r_seed)))
        cpy_r_r9 = cpy_r_seed;
    else {
        CPy_TypeErrorTraceback("checksum_dict/default.py", "__init__", 48, CPyStatic_default___globals, "dict", cpy_r_seed);
        goto CPyL20;
    }
    cpy_r_r10 = 0;
    cpy_r_r11 = PyDict_Size(cpy_r_r9);
    cpy_r_r12 = CPyDict_GetItemsIter(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL25;
    }
CPyL7: ;
    cpy_r_r13 = CPyDict_NextItem(cpy_r_r12, cpy_r_r10);
    cpy_r_r14 = cpy_r_r13.f1;
    cpy_r_r10 = cpy_r_r14;
    cpy_r_r15 = cpy_r_r13.f0;
    if (!cpy_r_r15) goto CPyL26;
    cpy_r_r16 = cpy_r_r13.f2;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = cpy_r_r13.f3;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r13.f2);
    CPy_DECREF(cpy_r_r13.f3);
    cpy_r_key = cpy_r_r16;
    cpy_r_value = cpy_r_r17;
    cpy_r_r18 = CPyDict_SetItem(cpy_r_self, cpy_r_key, cpy_r_value);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_value);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("checksum_dict/default.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL27;
    }
    cpy_r_r20 = CPyDict_CheckSize(cpy_r_r9, cpy_r_r11);
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("checksum_dict/default.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL27;
    } else
        goto CPyL7;
CPyL10: ;
    cpy_r_r21 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("checksum_dict/default.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL20;
    } else
        goto CPyL19;
CPyL11: ;
    cpy_r_r22 = CPyStatic_default___globals;
    cpy_r_r23 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Iterable' */
    cpy_r_r24 = CPyDict_GetItem(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL22;
    }
    cpy_r_r25 = PyObject_IsInstance(cpy_r_seed, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("checksum_dict/default.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL22;
    }
    cpy_r_r27 = cpy_r_r25;
    if (!cpy_r_r27) goto CPyL28;
    cpy_r_r28 = PyObject_GetIter(cpy_r_seed);
    CPy_DECREF(cpy_r_seed);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL20;
    }
CPyL15: ;
    cpy_r_r29 = PyIter_Next(cpy_r_r28);
    if (cpy_r_r29 == NULL) goto CPyL29;
    PyObject *__tmp27;
    if (unlikely(!(PyTuple_Check(cpy_r_r29) && PyTuple_GET_SIZE(cpy_r_r29) == 2))) {
        __tmp27 = NULL;
        goto __LL28;
    }
    if (PyBytes_Check(PyTuple_GET_ITEM(cpy_r_r29, 0)) || PyByteArray_Check(PyTuple_GET_ITEM(cpy_r_r29, 0)))
        __tmp27 = PyTuple_GET_ITEM(cpy_r_r29, 0);
    else {
        __tmp27 = NULL;
    }
    if (__tmp27 != NULL) goto __LL29;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r29, 0)))
        __tmp27 = PyTuple_GET_ITEM(cpy_r_r29, 0);
    else {
        __tmp27 = NULL;
    }
    if (__tmp27 != NULL) goto __LL29;
    __tmp27 = PyTuple_GET_ITEM(cpy_r_r29, 0);
    if (__tmp27 != NULL) goto __LL29;
    __tmp27 = NULL;
__LL29: ;
    if (__tmp27 == NULL) goto __LL28;
    __tmp27 = PyTuple_GET_ITEM(cpy_r_r29, 1);
    if (__tmp27 == NULL) goto __LL28;
    __tmp27 = cpy_r_r29;
__LL28: ;
    if (unlikely(__tmp27 == NULL)) {
        CPy_TypeError("tuple[union[bytes, str, object], object]", cpy_r_r29); cpy_r_r30 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp30 = PyTuple_GET_ITEM(cpy_r_r29, 0);
        CPy_INCREF(__tmp30);
        PyObject *__tmp31;
        if (PyBytes_Check(__tmp30) || PyByteArray_Check(__tmp30))
            __tmp31 = __tmp30;
        else {
            __tmp31 = NULL;
        }
        if (__tmp31 != NULL) goto __LL32;
        if (PyUnicode_Check(__tmp30))
            __tmp31 = __tmp30;
        else {
            __tmp31 = NULL;
        }
        if (__tmp31 != NULL) goto __LL32;
        __tmp31 = __tmp30;
        if (__tmp31 != NULL) goto __LL32;
        CPy_TypeError("union[bytes, str, object]", __tmp30); 
        __tmp31 = NULL;
__LL32: ;
        cpy_r_r30.f0 = __tmp31;
        PyObject *__tmp33 = PyTuple_GET_ITEM(cpy_r_r29, 1);
        CPy_INCREF(__tmp33);
        PyObject *__tmp34;
        __tmp34 = __tmp33;
        cpy_r_r30.f1 = __tmp34;
    }
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30.f0 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL30;
    }
    cpy_r_r31 = cpy_r_r30.f0;
    CPy_INCREF(cpy_r_r31);
    cpy_r_key = cpy_r_r31;
    cpy_r_r32 = cpy_r_r30.f1;
    CPy_INCREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r30.f0);
    CPy_DECREF(cpy_r_r30.f1);
    cpy_r_value = cpy_r_r32;
    cpy_r_r33 = CPyDict_SetItem(cpy_r_self, cpy_r_key, cpy_r_value);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_value);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("checksum_dict/default.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL30;
    } else
        goto CPyL15;
CPyL18: ;
    cpy_r_r35 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("checksum_dict/default.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL20;
    }
CPyL19: ;
    return 1;
CPyL20: ;
    cpy_r_r36 = 2;
    return cpy_r_r36;
CPyL21: ;
    CPy_INCREF(cpy_r_seed);
    goto CPyL2;
CPyL22: ;
    CPy_DecRef(cpy_r_seed);
    goto CPyL20;
CPyL23: ;
    CPy_DecRef(cpy_r_seed);
    CPy_DecRef(cpy_r_r3);
    goto CPyL20;
CPyL24: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL4;
CPyL25: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL20;
CPyL26: ;
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r13.f2);
    CPy_DECREF(cpy_r_r13.f3);
    goto CPyL10;
CPyL27: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    goto CPyL20;
CPyL28: ;
    CPy_DECREF(cpy_r_seed);
    goto CPyL19;
CPyL29: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL18;
CPyL30: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL20;
}

PyObject *CPyPy_default___DefaultChecksumDict_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"default", "seed", 0};
    PyObject *obj_default;
    PyObject *obj_seed = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O|O", "__init__", kwlist, &obj_default, &obj_seed)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyDict_Check(obj_self)))
        arg_self = obj_self;
    else {
        CPy_TypeError("dict", obj_self); 
        goto fail;
    }
    PyObject *arg_default = obj_default;
    PyObject *arg_seed;
    if (obj_seed == NULL) {
        arg_seed = NULL;
        goto __LL35;
    }
    if (PyDict_Check(obj_seed))
        arg_seed = obj_seed;
    else {
        arg_seed = NULL;
    }
    if (arg_seed != NULL) goto __LL35;
    arg_seed = obj_seed;
    if (arg_seed != NULL) goto __LL35;
    if (obj_seed == Py_None)
        arg_seed = obj_seed;
    else {
        arg_seed = NULL;
    }
    if (arg_seed != NULL) goto __LL35;
    CPy_TypeError("union[dict, object, None]", obj_seed); 
    goto fail;
__LL35: ;
    char retval = CPyDef_default___DefaultChecksumDict_____init__(arg_self, arg_default, arg_seed);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("checksum_dict/default.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
    return NULL;
}

char CPyDef_default___DefaultChecksumDict_____init___3__DefaultChecksumDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_default, PyObject *cpy_r_seed) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__init__' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_self, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL10;
    cpy_r_r2 = PyList_New(1);
    if (cpy_r_r2 == NULL) goto CPyL11;
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    CPy_INCREF(cpy_r_default);
    *(PyObject * *)cpy_r_r4 = cpy_r_default;
    cpy_r_r5 = PyDict_New();
    if (cpy_r_r5 == NULL) goto CPyL12;
    cpy_r_r6 = 0;
    if (cpy_r_seed == NULL) goto CPyL5;
    cpy_r_r7 = PyList_Append(cpy_r_r2, cpy_r_seed);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (!cpy_r_r8) {
        goto CPyL13;
    } else
        goto CPyL6;
CPyL5: ;
    cpy_r_r6 = 1;
CPyL6: ;
    cpy_r_r9 = PyList_AsTuple(cpy_r_r2);
    CPy_DECREF_NO_IMM(cpy_r_r2);
    if (cpy_r_r9 == NULL) goto CPyL14;
    cpy_r_r10 = PyObject_Call(cpy_r_r1, cpy_r_r9, cpy_r_r5);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r5);
    if (cpy_r_r10 == NULL) goto CPyL10;
    if (unlikely(cpy_r_r10 != Py_None)) {
        CPy_TypeError("None", cpy_r_r10); cpy_r_r11 = 2;
    } else
        cpy_r_r11 = 1;
    CPy_DECREF(cpy_r_r10);
    if (cpy_r_r11 == 2) goto CPyL10;
    return cpy_r_r11;
CPyL10: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL11: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL10;
CPyL12: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL10;
CPyL14: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    goto CPyL10;
}

PyObject *CPyPy_default___DefaultChecksumDict_____init___3__DefaultChecksumDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"default", "seed", 0};
    static CPyArg_Parser parser = {"O|O:__init____DefaultChecksumDict_glue", kwlist, 0};
    PyObject *obj_default;
    PyObject *obj_seed = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_default, &obj_seed)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_default___DefaultChecksumDict)))
        arg_self = obj_self;
    else {
        CPy_TypeError("checksum_dict.default.DefaultChecksumDict", obj_self); 
        goto fail;
    }
    PyObject *arg_default = obj_default;
    PyObject *arg_seed;
    if (obj_seed == NULL) {
        arg_seed = NULL;
        goto __LL36;
    }
    if (PyDict_Check(obj_seed))
        arg_seed = obj_seed;
    else {
        arg_seed = NULL;
    }
    if (arg_seed != NULL) goto __LL36;
    arg_seed = obj_seed;
    if (arg_seed != NULL) goto __LL36;
    if (obj_seed == Py_None)
        arg_seed = obj_seed;
    else {
        arg_seed = NULL;
    }
    if (arg_seed != NULL) goto __LL36;
    CPy_TypeError("union[dict, object, None]", obj_seed); 
    goto fail;
__LL36: ;
    char retval = CPyDef_default___DefaultChecksumDict_____init___3__DefaultChecksumDict_glue(arg_self, arg_default, arg_seed);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("checksum_dict/default.py", "__init____DefaultChecksumDict_glue", -1, CPyStatic_default___globals);
    return NULL;
}

PyObject *CPyDef_default___DefaultChecksumDict____getitem_nochecksum(PyObject *cpy_r_self, PyObject *cpy_r_key) {
    int32_t cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = PyDict_Contains(cpy_r_self, cpy_r_key);
    cpy_r_r1 = cpy_r_r0 >= 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("checksum_dict/default.py", "_getitem_nochecksum", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL7;
    }
    cpy_r_r2 = cpy_r_r0;
    if (!cpy_r_r2) goto CPyL4;
    cpy_r_r3 = CPyDict_GetItem(cpy_r_self, cpy_r_key);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "_getitem_nochecksum", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL7;
    }
    return cpy_r_r3;
CPyL4: ;
    cpy_r_r4 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'default_factory' */
    PyObject *cpy_r_r5[1] = {cpy_r_self};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "_getitem_nochecksum", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL7;
    }
    cpy_r_r8 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_setitem_nochecksum' */
    PyObject *cpy_r_r9[3] = {cpy_r_self, cpy_r_key, cpy_r_r7};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = PyObject_VectorcallMethod(cpy_r_r8, cpy_r_r10, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "_getitem_nochecksum", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL8;
    } else
        goto CPyL9;
CPyL6: ;
    return cpy_r_r7;
CPyL7: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL8: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL7;
CPyL9: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL6;
}

PyObject *CPyPy_default___DefaultChecksumDict____getitem_nochecksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", 0};
    static CPyArg_Parser parser = {"O:_getitem_nochecksum", kwlist, 0};
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_key)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyDict_Check(obj_self)))
        arg_self = obj_self;
    else {
        CPy_TypeError("dict", obj_self); 
        goto fail;
    }
    PyObject *arg_key;
    if (likely(PyUnicode_Check(obj_key)))
        arg_key = obj_key;
    else {
        CPy_TypeError("str", obj_key); 
        goto fail;
    }
    PyObject *retval = CPyDef_default___DefaultChecksumDict____getitem_nochecksum(arg_self, arg_key);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict/default.py", "_getitem_nochecksum", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
    return NULL;
}

PyObject *CPyDef_default___DefaultChecksumDict____getitem_nochecksum__DefaultChecksumDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '_getitem_nochecksum' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_key};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_default___DefaultChecksumDict____getitem_nochecksum__DefaultChecksumDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", 0};
    static CPyArg_Parser parser = {"O:_getitem_nochecksum__DefaultChecksumDict_glue", kwlist, 0};
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_key)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_default___DefaultChecksumDict)))
        arg_self = obj_self;
    else {
        CPy_TypeError("checksum_dict.default.DefaultChecksumDict", obj_self); 
        goto fail;
    }
    PyObject *arg_key;
    if (likely(PyUnicode_Check(obj_key)))
        arg_key = obj_key;
    else {
        CPy_TypeError("str", obj_key); 
        goto fail;
    }
    PyObject *retval = CPyDef_default___DefaultChecksumDict____getitem_nochecksum__DefaultChecksumDict_glue(arg_self, arg_key);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict/default.py", "_getitem_nochecksum__DefaultChecksumDict_glue", -1, CPyStatic_default___globals);
    return NULL;
}

char CPyDef_default_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    tuple_T2OO cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "<module>", -1, CPyStatic_default___globals);
        goto CPyL21;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('defaultdict',) */
    cpy_r_r6 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'collections' */
    cpy_r_r7 = CPyStatic_default___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL21;
    }
    CPyModule_collections = cpy_r_r8;
    CPy_INCREF(CPyModule_collections);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('Iterable',) */
    cpy_r_r10 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'collections.abc' */
    cpy_r_r11 = CPyStatic_default___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL21;
    }
    CPyModule_collections___abc = cpy_r_r12;
    CPy_INCREF(CPyModule_collections___abc);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('Callable', 'DefaultDict', 'Optional') */
    cpy_r_r14 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r15 = CPyStatic_default___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL21;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('ChecksumAddress',) */
    cpy_r_r18 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'eth_typing' */
    cpy_r_r19 = CPyStatic_default___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL21;
    }
    CPyModule_eth_typing = cpy_r_r20;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('mypyc_attr',) */
    cpy_r_r22 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'mypy_extensions' */
    cpy_r_r23 = CPyStatic_default___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL21;
    }
    CPyModule_mypy_extensions = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy_extensions);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('ChecksumAddressDict', 'T', '_SeedT') */
    cpy_r_r26 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'checksum_dict.base' */
    cpy_r_r27 = CPyStatic_default___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL21;
    }
    CPyModule_checksum_dict___base = cpy_r_r28;
    CPy_INCREF(CPyModule_checksum_dict___base);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatic_default___globals;
    cpy_r_r30 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'DefaultDict' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL21;
    }
    cpy_r_r32 = CPyStatic_default___globals;
    cpy_r_r33 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'ChecksumAddress' */
    cpy_r_r34 = CPyDict_GetItem(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL22;
    }
    cpy_r_r35 = CPyStatic_default___globals;
    cpy_r_r36 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'T' */
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL23;
    }
    cpy_r_r38.f0 = cpy_r_r34;
    cpy_r_r38.f1 = cpy_r_r37;
    cpy_r_r39 = PyTuple_New(2);
    if (unlikely(cpy_r_r39 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp37 = cpy_r_r38.f0;
    PyTuple_SET_ITEM(cpy_r_r39, 0, __tmp37);
    PyObject *__tmp38 = cpy_r_r38.f1;
    PyTuple_SET_ITEM(cpy_r_r39, 1, __tmp38);
    cpy_r_r40 = PyObject_GetItem(cpy_r_r31, cpy_r_r39);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL21;
    }
    cpy_r_r41 = (PyObject *)CPyType_base___ChecksumAddressDict;
    cpy_r_r42 = CPyStatic_default___globals;
    cpy_r_r43 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'T' */
    cpy_r_r44 = CPyDict_GetItem(cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL24;
    }
    cpy_r_r45 = PyObject_GetItem(cpy_r_r41, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL24;
    }
    cpy_r_r46 = PyTuple_Pack(2, cpy_r_r40, cpy_r_r45);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL21;
    }
    cpy_r_r47 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'checksum_dict.default' */
    cpy_r_r48 = (PyObject *)CPyType_default___DefaultChecksumDict_template;
    cpy_r_r49 = CPyType_FromTemplate(cpy_r_r48, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL21;
    }
    cpy_r_r50 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__mypyc_attrs__' */
    cpy_r_r51 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__dict__' */
    cpy_r_r52 = PyTuple_Pack(1, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("checksum_dict/default.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL25;
    }
    cpy_r_r53 = PyObject_SetAttr(cpy_r_r49, cpy_r_r50, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("checksum_dict/default.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL25;
    }
    CPyType_default___DefaultChecksumDict = (PyTypeObject *)cpy_r_r49;
    CPy_INCREF(CPyType_default___DefaultChecksumDict);
    cpy_r_r55 = CPyStatic_default___globals;
    cpy_r_r56 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'DefaultChecksumDict' */
    cpy_r_r57 = PyDict_SetItem(cpy_r_r55, cpy_r_r56, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("checksum_dict/default.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_default___globals);
        goto CPyL21;
    }
    return 1;
CPyL21: ;
    cpy_r_r59 = 2;
    return cpy_r_r59;
CPyL22: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL21;
CPyL23: ;
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r34);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL21;
CPyL25: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL21;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_checksum_dict____utils = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_cchecksum = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_checksum_dict___base = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_collections___abc = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_mypy_extensions = Py_None;
    CPyModule_checksum_dict = Py_None;
    CPyModule_checksum_dict____typing = Py_None;
    CPyModule_checksum_dict____utils = Py_None;
    CPyModule_checksum_dict___default = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_collections = Py_None;
    CPyModule_collections___abc = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_mypy_extensions = Py_None;
    CPyModule_checksum_dict___base = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[DIFFCHECK_PLACEHOLDER];
const char * const CPyLit_Str[] = {
    "\005\003hex\aaddress\023to_checksum_address\nValueError\001\'",
    "\006\034\' is not a valid ETH address\bContract\005ERC20\abrownie\001y\tdank_mids",
    "\t\n__module__\001.\bbuiltins\rTYPE_CHECKING\003Any\005Final\005Union\006typing\tcchecksum",
    "\004\027checksum_dict/_utils.py\b<module>\017ChecksumAddress\neth_typing",
    "\005\030_KNOWN_CHECKSUMMED_TYPES\bIterable\b__init__\024ChecksumAddressDict(\001)",
    "\006\b__repr__\v__getitem__\bKeyError\004args\nexceptions\v__setitem__",
    "\005\023_getitem_nochecksum\0020x\023_setitem_nochecksum\017collections.abc\bOptional",
    "\005\aTypeVar\boverload\nmypyc_attr\017mypy_extensions\rchecksum_dict",
    "\003\024AnyAddressOrContract\025checksum_dict._typing\020attempt_checksum",
    "\005\024checksum_dict._utils\001T\006_SeedT\022checksum_dict.base\017__mypyc_attrs__",
    "\005\b__dict__\023ChecksumAddressDict\vdefaultdict\017default_factory\vcollections",
    "\004\bCallable\vDefaultDict\025checksum_dict.default\023DefaultChecksumDict",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    13, 4, 17, 18, 19, 20, 3, 22, 22, 22, 1, 66, 1, 25, 1, 28, 4, 42,
    43, 20, 44, 1, 45, 1, 36, 1, 48, 1, 50, 1, 58, 3, 61, 62, 42, 3, 57,
    52, 53
};
const int CPyLit_FrozenSet[] = {2, 2, 9, 10, 3, 11, 12, 13};
CPyModule *CPyModule_checksum_dict____utils__internal = NULL;
CPyModule *CPyModule_checksum_dict____utils;
PyObject *CPyStatic__utils___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_cchecksum;
CPyModule *CPyModule_eth_typing;
CPyModule *CPyModule_checksum_dict___base__internal = NULL;
CPyModule *CPyModule_checksum_dict___base;
PyObject *CPyStatic_base___globals;
CPyModule *CPyModule_collections___abc;
CPyModule *CPyModule_mypy_extensions;
CPyModule *CPyModule_checksum_dict;
CPyModule *CPyModule_checksum_dict____typing;
CPyModule *CPyModule_checksum_dict___default__internal = NULL;
CPyModule *CPyModule_checksum_dict___default;
PyObject *CPyStatic_default___globals;
CPyModule *CPyModule_collections;
PyObject *CPyStatic__utils____KNOWN_CHECKSUMMED_TYPES = NULL;
PyObject *CPyDef__utils___attempt_checksum(PyObject *cpy_r_value);
PyObject *CPyPy__utils___attempt_checksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__utils___checksum_or_raise(PyObject *cpy_r_string);
PyObject *CPyPy__utils___checksum_or_raise(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__utils____type_has_checksum_addr(PyObject *cpy_r_typ);
PyObject *CPyPy__utils____type_has_checksum_addr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__utils_____top_level__(void);
PyTypeObject *CPyType_base___ChecksumAddressDict;
char CPyDef_base___ChecksumAddressDict_____init__(PyObject *cpy_r_self, PyObject *cpy_r_seed);
PyObject *CPyPy_base___ChecksumAddressDict_____init__(PyObject *self, PyObject *args, PyObject *kw);
char CPyDef_base___ChecksumAddressDict_____init___3__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_seed);
PyObject *CPyPy_base___ChecksumAddressDict_____init___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_base___ChecksumAddressDict_____repr__(PyObject *cpy_r_self);
PyObject *CPyPy_base___ChecksumAddressDict_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_base___ChecksumAddressDict_____repr___3__ChecksumAddressDict_glue(PyObject *cpy_r_self);
PyObject *CPyPy_base___ChecksumAddressDict_____repr___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_base___ChecksumAddressDict_____getitem__(PyObject *cpy_r_self, PyObject *cpy_r_key);
PyObject *CPyPy_base___ChecksumAddressDict_____getitem__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_base___ChecksumAddressDict_____getitem___3__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key);
PyObject *CPyPy_base___ChecksumAddressDict_____getitem___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_base___ChecksumAddressDict_____setitem__(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value);
PyObject *CPyPy_base___ChecksumAddressDict_____setitem__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_base___ChecksumAddressDict_____setitem___3__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value);
PyObject *CPyPy_base___ChecksumAddressDict_____setitem___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_base___ChecksumAddressDict____getitem_nochecksum(PyObject *cpy_r_self, PyObject *cpy_r_key);
PyObject *CPyPy_base___ChecksumAddressDict____getitem_nochecksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_base___ChecksumAddressDict____getitem_nochecksum__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key);
PyObject *CPyPy_base___ChecksumAddressDict____getitem_nochecksum__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_base___ChecksumAddressDict____setitem_nochecksum(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value);
PyObject *CPyPy_base___ChecksumAddressDict____setitem_nochecksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_base___ChecksumAddressDict____setitem_nochecksum__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value);
PyObject *CPyPy_base___ChecksumAddressDict____setitem_nochecksum__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_base_____top_level__(void);
PyTypeObject *CPyType_default___DefaultChecksumDict;
char CPyDef_default___DefaultChecksumDict_____init__(PyObject *cpy_r_self, PyObject *cpy_r_default, PyObject *cpy_r_seed);
PyObject *CPyPy_default___DefaultChecksumDict_____init__(PyObject *self, PyObject *args, PyObject *kw);
char CPyDef_default___DefaultChecksumDict_____init___3__DefaultChecksumDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_default, PyObject *cpy_r_seed);
PyObject *CPyPy_default___DefaultChecksumDict_____init___3__DefaultChecksumDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_default___DefaultChecksumDict____getitem_nochecksum(PyObject *cpy_r_self, PyObject *cpy_r_key);
PyObject *CPyPy_default___DefaultChecksumDict____getitem_nochecksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_default___DefaultChecksumDict____getitem_nochecksum__DefaultChecksumDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key);
PyObject *CPyPy_default___DefaultChecksumDict____getitem_nochecksum__DefaultChecksumDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_default_____top_level__(void);

static int exec_checksum_dict__mypyc(PyObject *module)
{
    int res;
    PyObject *capsule;
    PyObject *tmp;
    
    extern PyObject *CPyInit_checksum_dict____utils(void);
    capsule = PyCapsule_New((void *)CPyInit_checksum_dict____utils, "checksum_dict__mypyc.init_checksum_dict____utils", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_checksum_dict____utils", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_checksum_dict___base(void);
    capsule = PyCapsule_New((void *)CPyInit_checksum_dict___base, "checksum_dict__mypyc.init_checksum_dict___base", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_checksum_dict___base", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_checksum_dict___default(void);
    capsule = PyCapsule_New((void *)CPyInit_checksum_dict___default, "checksum_dict__mypyc.init_checksum_dict___default", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_checksum_dict___default", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return 0;
    fail:
    return -1;
}
static PyModuleDef module_def_checksum_dict__mypyc = {
    PyModuleDef_HEAD_INIT,
    .m_name = "checksum_dict__mypyc",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = NULL,
};
PyMODINIT_FUNC PyInit_checksum_dict__mypyc(void) {
    static PyObject *module = NULL;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&module_def_checksum_dict__mypyc);
    if (!module) {
        return NULL;
    }
    if (exec_checksum_dict__mypyc(module) < 0) {
        Py_DECREF(module);
        return NULL;
    }
    return module;
}
