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
#include "__native__utils.h"
#include "__native_internal__utils.h"
static PyMethodDef module_methods[] = {
    {"attempt_checksum", (PyCFunction)CPyPy_attempt_checksum, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"checksum_or_raise", (PyCFunction)CPyPy_checksum_or_raise, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "checksum_dict._utils",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    module_methods
};

PyObject *CPyInit_checksum_dict____utils(void)
{
    PyObject* modname = NULL;
    if (CPyModule_checksum_dict____utils_internal) {
        Py_INCREF(CPyModule_checksum_dict____utils_internal);
        return CPyModule_checksum_dict____utils_internal;
    }
    CPyModule_checksum_dict____utils_internal = PyModule_Create(&module);
    if (unlikely(CPyModule_checksum_dict____utils_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_checksum_dict____utils_internal, "__name__");
    CPyStatic_globals = PyModule_GetDict(CPyModule_checksum_dict____utils_internal);
    if (unlikely(CPyStatic_globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef___top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_checksum_dict____utils_internal;
    fail:
    Py_CLEAR(CPyModule_checksum_dict____utils_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_to_checksum_address);
    CPyStatic_to_checksum_address = NULL;
    return NULL;
}

PyObject *CPyDef_attempt_checksum(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    cpy_r_r0 = (PyObject *)&PyUnicode_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_value, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", 30, CPyStatic_globals);
        goto CPyL17;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL5;
    CPy_INCREF(cpy_r_value);
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r4 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "attempt_checksum", 31, CPyStatic_globals, "str", cpy_r_value);
        goto CPyL17;
    }
    cpy_r_r5 = CPyDef_checksum_or_raise(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", 31, CPyStatic_globals);
        goto CPyL17;
    }
    return cpy_r_r5;
CPyL5: ;
    CPy_INCREF(cpy_r_value);
    if (likely(PyBytes_Check(cpy_r_value) || PyByteArray_Check(cpy_r_value)))
        cpy_r_r6 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "attempt_checksum", 32, CPyStatic_globals, "bytes", cpy_r_value);
        goto CPyL17;
    }
    cpy_r_r7 = PyObject_Type(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = (PyObject *)&PyBytes_Type;
    cpy_r_r9 = cpy_r_r7 == cpy_r_r8;
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r9) goto CPyL12;
    CPy_INCREF(cpy_r_value);
    if (likely(PyBytes_Check(cpy_r_value) || PyByteArray_Check(cpy_r_value)))
        cpy_r_r10 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "attempt_checksum", 33, CPyStatic_globals, "bytes", cpy_r_value);
        goto CPyL17;
    }
    cpy_r_r11 = CPyStatics[3]; /* 'hex' */
    PyObject *cpy_r_r12[1] = {cpy_r_r10};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r11, cpy_r_r13, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", 33, CPyStatic_globals);
        goto CPyL18;
    }
    CPy_DECREF(cpy_r_r10);
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "attempt_checksum", 33, CPyStatic_globals, "str", cpy_r_r14);
        goto CPyL17;
    }
    cpy_r_r16 = CPyDef_checksum_or_raise(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", 33, CPyStatic_globals);
        goto CPyL17;
    }
    return cpy_r_r16;
CPyL12: ;
    CPy_INCREF(cpy_r_value);
    if (likely(PyBytes_Check(cpy_r_value) || PyByteArray_Check(cpy_r_value)))
        cpy_r_r17 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "attempt_checksum", 35, CPyStatic_globals, "bytes", cpy_r_value);
        goto CPyL17;
    }
    cpy_r_r18 = CPyStatics[3]; /* 'hex' */
    PyObject *cpy_r_r19[1] = {cpy_r_r17};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_VectorcallMethod(cpy_r_r18, cpy_r_r20, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", 35, CPyStatic_globals);
        goto CPyL19;
    }
    CPy_DECREF(cpy_r_r17);
    if (likely(PyUnicode_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "attempt_checksum", 35, CPyStatic_globals, "str", cpy_r_r21);
        goto CPyL17;
    }
    cpy_r_r23 = CPyDef_checksum_or_raise(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", 35, CPyStatic_globals);
        goto CPyL17;
    }
    return cpy_r_r23;
CPyL17: ;
    cpy_r_r24 = NULL;
    return cpy_r_r24;
CPyL18: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL17;
}

PyObject *CPyPy_attempt_checksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    CPy_TypeError("union[str, bytes]", obj_value); 
    goto fail;
__LL1: ;
    PyObject *retval = CPyDef_attempt_checksum(arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", 28, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_checksum_or_raise(PyObject *cpy_r_string) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T3OOO cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = CPyStatic_to_checksum_address;
    if (likely(cpy_r_r0 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_checksum_address\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", 40, CPyStatic_globals);
        goto CPyL6;
    }
    CPy_Unreachable();
CPyL4: ;
    PyObject *cpy_r_r2[1] = {cpy_r_string};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = _PyObject_Vectorcall(cpy_r_r0, cpy_r_r3, 1, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", 40, CPyStatic_globals);
        goto CPyL6;
    }
    return cpy_r_r4;
CPyL6: ;
    cpy_r_r5 = CPy_CatchError();
    cpy_r_r6 = CPyModule_builtins;
    cpy_r_r7 = CPyStatics[4]; /* 'ValueError' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", 41, CPyStatic_globals);
        goto CPyL15;
    }
    cpy_r_r9 = CPy_ExceptionMatches(cpy_r_r8);
    CPy_DecRef(cpy_r_r8);
    if (!cpy_r_r9) goto CPyL13;
    cpy_r_r10 = CPy_GetExcValue();
    CPy_DecRef(cpy_r_r10);
    cpy_r_r11 = CPyStatics[5]; /* "'" */
    cpy_r_r12 = CPyStatics[6]; /* "' is not a valid ETH address" */
    cpy_r_r13 = CPyStr_Build(3, cpy_r_r11, cpy_r_string, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", 42, CPyStatic_globals);
        goto CPyL15;
    }
    cpy_r_r14 = CPyModule_builtins;
    cpy_r_r15 = CPyStatics[4]; /* 'ValueError' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", 42, CPyStatic_globals);
        goto CPyL18;
    }
    PyObject *cpy_r_r17[1] = {cpy_r_r13};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, 0);
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", 42, CPyStatic_globals);
        goto CPyL18;
    }
    CPy_DecRef(cpy_r_r13);
    CPy_Raise(cpy_r_r19);
    CPy_DecRef(cpy_r_r19);
    if (unlikely(!0)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", 42, CPyStatic_globals);
        goto CPyL15;
    } else
        goto CPyL19;
CPyL12: ;
    CPy_Unreachable();
CPyL13: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL15;
    } else
        goto CPyL20;
CPyL14: ;
    CPy_Unreachable();
CPyL15: ;
    CPy_RestoreExcInfo(cpy_r_r5);
    CPy_DecRef(cpy_r_r5.f0);
    CPy_DecRef(cpy_r_r5.f1);
    CPy_DecRef(cpy_r_r5.f2);
    cpy_r_r20 = CPy_KeepPropagating();
    if (!cpy_r_r20) goto CPyL17;
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL18: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_r5.f0);
    CPy_DecRef(cpy_r_r5.f1);
    CPy_DecRef(cpy_r_r5.f2);
    goto CPyL12;
CPyL20: ;
    CPy_DecRef(cpy_r_r5.f0);
    CPy_DecRef(cpy_r_r5.f1);
    CPy_DecRef(cpy_r_r5.f2);
    goto CPyL14;
}

PyObject *CPyPy_checksum_or_raise(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_checksum_or_raise(arg_string);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", 38, CPyStatic_globals);
    return NULL;
}

char CPyDef___top_level__(void) {
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
    tuple_T2OO cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
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
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    tuple_T4OOOO cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[7]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", -1, CPyStatic_globals);
        goto CPyL27;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[24]; /* ('TYPE_CHECKING', 'Final', 'Union') */
    cpy_r_r6 = CPyStatics[11]; /* 'typing' */
    cpy_r_r7 = CPyStatic_globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 7, CPyStatic_globals);
        goto CPyL27;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_cchecksum;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {9};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[26]; /* (('cchecksum', 'cchecksum', 'cchecksum'),) */
    cpy_r_r15 = CPyStatic_globals;
    cpy_r_r16 = CPyStatics[13]; /* 'checksum_dict/_utils.py' */
    cpy_r_r17 = CPyStatics[14]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL27;
    cpy_r_r19 = CPyStatics[27]; /* ('Address', 'ChecksumAddress', 'HexAddress') */
    cpy_r_r20 = CPyStatics[18]; /* 'eth_typing' */
    cpy_r_r21 = CPyStatic_globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 10, CPyStatic_globals);
        goto CPyL27;
    }
    CPyModule_eth_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r22);
    if (!0) goto CPyL14;
    cpy_r_r23 = CPyStatic_globals;
    cpy_r_r24 = CPyStatics[10]; /* 'Union' */
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 16, CPyStatic_globals);
        goto CPyL27;
    }
    cpy_r_r26 = CPyStatic_globals;
    cpy_r_r27 = CPyStatics[19]; /* 'brownie' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 16, CPyStatic_globals);
        goto CPyL28;
    }
    cpy_r_r29 = CPyStatics[20]; /* 'Contract' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 16, CPyStatic_globals);
        goto CPyL28;
    }
    cpy_r_r31 = CPyStatic_globals;
    cpy_r_r32 = CPyStatics[21]; /* 'y' */
    cpy_r_r33 = CPyDict_GetItem(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 16, CPyStatic_globals);
        goto CPyL29;
    }
    cpy_r_r34 = CPyStatics[20]; /* 'Contract' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 16, CPyStatic_globals);
        goto CPyL29;
    }
    cpy_r_r36.f0 = cpy_r_r30;
    cpy_r_r36.f1 = cpy_r_r35;
    cpy_r_r37 = PyTuple_New(2);
    if (unlikely(cpy_r_r37 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2 = cpy_r_r36.f0;
    PyTuple_SET_ITEM(cpy_r_r37, 0, __tmp2);
    PyObject *__tmp3 = cpy_r_r36.f1;
    PyTuple_SET_ITEM(cpy_r_r37, 1, __tmp3);
    cpy_r_r38 = PyObject_GetItem(cpy_r_r25, cpy_r_r37);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 16, CPyStatic_globals);
        goto CPyL27;
    }
    cpy_r_r39 = CPyStatic_globals;
    cpy_r_r40 = CPyStatics[20]; /* 'Contract' */
    cpy_r_r41 = CPyDict_SetItem(cpy_r_r39, cpy_r_r40, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 16, CPyStatic_globals);
        goto CPyL27;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r43 = 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 20, CPyStatic_globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r44 = CPyStatic_globals;
    cpy_r_r45 = CPyStatics[10]; /* 'Union' */
    cpy_r_r46 = CPyDict_GetItem(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 22, CPyStatic_globals);
        goto CPyL27;
    }
    cpy_r_r47 = CPyStatic_globals;
    cpy_r_r48 = CPyStatics[15]; /* 'Address' */
    cpy_r_r49 = CPyDict_GetItem(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 22, CPyStatic_globals);
        goto CPyL30;
    }
    cpy_r_r50 = CPyStatic_globals;
    cpy_r_r51 = CPyStatics[17]; /* 'HexAddress' */
    cpy_r_r52 = CPyDict_GetItem(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 22, CPyStatic_globals);
        goto CPyL31;
    }
    cpy_r_r53 = CPyStatic_globals;
    cpy_r_r54 = CPyStatics[16]; /* 'ChecksumAddress' */
    cpy_r_r55 = CPyDict_GetItem(cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 22, CPyStatic_globals);
        goto CPyL32;
    }
    cpy_r_r56 = CPyStatic_globals;
    cpy_r_r57 = CPyStatics[20]; /* 'Contract' */
    cpy_r_r58 = CPyDict_GetItem(cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 22, CPyStatic_globals);
        goto CPyL33;
    }
    cpy_r_r59.f0 = cpy_r_r49;
    cpy_r_r59.f1 = cpy_r_r52;
    cpy_r_r59.f2 = cpy_r_r55;
    cpy_r_r59.f3 = cpy_r_r58;
    cpy_r_r60 = PyTuple_New(4);
    if (unlikely(cpy_r_r60 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4 = cpy_r_r59.f0;
    PyTuple_SET_ITEM(cpy_r_r60, 0, __tmp4);
    PyObject *__tmp5 = cpy_r_r59.f1;
    PyTuple_SET_ITEM(cpy_r_r60, 1, __tmp5);
    PyObject *__tmp6 = cpy_r_r59.f2;
    PyTuple_SET_ITEM(cpy_r_r60, 2, __tmp6);
    PyObject *__tmp7 = cpy_r_r59.f3;
    PyTuple_SET_ITEM(cpy_r_r60, 3, __tmp7);
    cpy_r_r61 = PyObject_GetItem(cpy_r_r46, cpy_r_r60);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 22, CPyStatic_globals);
        goto CPyL27;
    }
    cpy_r_r62 = CPyStatic_globals;
    cpy_r_r63 = CPyStatics[22]; /* 'AnyAddressOrContract' */
    cpy_r_r64 = CPyDict_SetItem(cpy_r_r62, cpy_r_r63, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 22, CPyStatic_globals);
        goto CPyL27;
    }
    cpy_r_r66 = CPyStatic_globals;
    cpy_r_r67 = CPyStatics[12]; /* 'cchecksum' */
    cpy_r_r68 = CPyDict_GetItem(cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 25, CPyStatic_globals);
        goto CPyL27;
    }
    cpy_r_r69 = CPyStatics[23]; /* 'to_checksum_address' */
    cpy_r_r70 = CPyObject_GetAttr(cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 25, CPyStatic_globals);
        goto CPyL27;
    }
    CPyStatic_to_checksum_address = cpy_r_r70;
    CPy_INCREF(CPyStatic_to_checksum_address);
    cpy_r_r71 = CPyStatic_globals;
    cpy_r_r72 = CPyStatics[23]; /* 'to_checksum_address' */
    cpy_r_r73 = CPyDict_SetItem(cpy_r_r71, cpy_r_r72, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 25, CPyStatic_globals);
        goto CPyL27;
    }
    return 1;
CPyL27: ;
    cpy_r_r75 = 2;
    return cpy_r_r75;
CPyL28: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r30);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL27;
CPyL31: ;
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r49);
    goto CPyL27;
CPyL32: ;
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r52);
    goto CPyL27;
CPyL33: ;
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r55);
    goto CPyL27;
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
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[28];
const char * const CPyLit_Str[] = {
    "\006\003hex\nValueError\001\'\034\' is not a valid ETH address\bbuiltins\rTYPE_CHECKING",
    "\a\005Final\005Union\006typing\tcchecksum\027checksum_dict/_utils.py\b<module>\aAddress",
    "\006\017ChecksumAddress\nHexAddress\neth_typing\abrownie\bContract\001y",
    "\002\024AnyAddressOrContract\023to_checksum_address",
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
const int CPyLit_Tuple[] = {4, 3, 8, 9, 10, 3, 12, 12, 12, 1, 25, 3, 15, 16, 17};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_checksum_dict____utils_internal = NULL;
CPyModule *CPyModule_checksum_dict____utils;
PyObject *CPyStatic_globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_cchecksum;
CPyModule *CPyModule_eth_typing;
PyObject *CPyStatic_to_checksum_address = NULL;
PyObject *CPyDef_attempt_checksum(PyObject *cpy_r_value);
PyObject *CPyPy_attempt_checksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_checksum_or_raise(PyObject *cpy_r_string);
PyObject *CPyPy_checksum_or_raise(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef___top_level__(void);

static struct export_table_checksum_dict____utils exports = {
    &CPyStatic_to_checksum_address,
    &CPyDef_attempt_checksum,
    &CPyDef_checksum_or_raise,
    &CPyDef___top_level__,
};

PyMODINIT_FUNC PyInit__utils__mypyc(void)
{
    static PyModuleDef def = { PyModuleDef_HEAD_INIT, "checksum_dict._utils__mypyc", NULL, -1, NULL, NULL };
    int res;
    PyObject *capsule;
    PyObject *tmp;
    static PyObject *module;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&def);
    if (!module) {
        goto fail;
    }
    
    capsule = PyCapsule_New(&exports, "checksum_dict._utils__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_checksum_dict____utils(void);
    capsule = PyCapsule_New((void *)CPyInit_checksum_dict____utils, "checksum_dict._utils__mypyc.init_checksum_dict____utils", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_checksum_dict____utils", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return module;
    fail:
    Py_XDECREF(module);
    return NULL;
}
