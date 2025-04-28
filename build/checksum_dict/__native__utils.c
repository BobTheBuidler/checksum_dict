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
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
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
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    cpy_r_r0 = (PyObject *)&PyUnicode_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_value, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "attempt_checksum", 21, CPyStatic_globals);
        goto CPyL25;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL5;
    CPy_INCREF(cpy_r_value);
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r4 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "attempt_checksum", 22, CPyStatic_globals, "str", cpy_r_value);
        goto CPyL25;
    }
    cpy_r_r5 = CPyDef_checksum_or_raise(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "attempt_checksum", 22, CPyStatic_globals);
        goto CPyL25;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = PyObject_Type(cpy_r_value);
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = (PyObject *)&PyBytes_Type;
    cpy_r_r8 = cpy_r_r6 == cpy_r_r7;
    CPy_DECREF(cpy_r_r6);
    if (cpy_r_r8) {
        goto CPyL26;
    } else
        goto CPyL11;
CPyL6: ;
    CPy_INCREF(cpy_r_value);
    cpy_r_r9 = cpy_r_value;
    cpy_r_r10 = CPyStatics[3]; /* 'hex' */
    PyObject *cpy_r_r11[1] = {cpy_r_r9};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = PyObject_VectorcallMethod(cpy_r_r10, cpy_r_r12, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "attempt_checksum", 24, CPyStatic_globals);
        goto CPyL27;
    }
    CPy_DECREF(cpy_r_r9);
    cpy_r_r14 = cpy_r_r13;
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "attempt_checksum", 24, CPyStatic_globals, "str", cpy_r_r14);
        goto CPyL25;
    }
    cpy_r_r16 = CPyDef_checksum_or_raise(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "attempt_checksum", 24, CPyStatic_globals);
        goto CPyL25;
    }
    return cpy_r_r16;
CPyL11: ;
    cpy_r_r17 = CPyStatics[4]; /* '__name__' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r17);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "attempt_checksum", 25, CPyStatic_globals);
        goto CPyL25;
    }
    if (likely(PyUnicode_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "attempt_checksum", 25, CPyStatic_globals, "str", cpy_r_r18);
        goto CPyL25;
    }
    cpy_r_r20 = CPyStatics[5]; /* 'Contract' */
    cpy_r_r21 = PyUnicode_Compare(cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r22 = cpy_r_r21 == -1;
    if (!cpy_r_r22) goto CPyL16;
    cpy_r_r23 = PyErr_Occurred();
    cpy_r_r24 = cpy_r_r23 != NULL;
    if (!cpy_r_r24) goto CPyL16;
    cpy_r_r25 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "attempt_checksum", 25, CPyStatic_globals);
        goto CPyL25;
    }
CPyL16: ;
    cpy_r_r26 = cpy_r_r21 == 0;
    if (!cpy_r_r26) goto CPyL20;
    CPy_INCREF(cpy_r_value);
    cpy_r_r27 = cpy_r_value;
    cpy_r_r28 = CPyStatics[6]; /* 'address' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "attempt_checksum", 27, CPyStatic_globals);
        goto CPyL25;
    }
    return cpy_r_r29;
CPyL20: ;
    CPy_INCREF(cpy_r_value);
    cpy_r_r30 = cpy_r_value;
    cpy_r_r31 = CPyStatics[3]; /* 'hex' */
    PyObject *cpy_r_r32[1] = {cpy_r_r30};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = PyObject_VectorcallMethod(cpy_r_r31, cpy_r_r33, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "attempt_checksum", 29, CPyStatic_globals);
        goto CPyL28;
    }
    CPy_DECREF(cpy_r_r30);
    cpy_r_r35 = cpy_r_r34;
    if (likely(PyUnicode_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "attempt_checksum", 29, CPyStatic_globals, "str", cpy_r_r35);
        goto CPyL25;
    }
    cpy_r_r37 = CPyDef_checksum_or_raise(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "attempt_checksum", 29, CPyStatic_globals);
        goto CPyL25;
    }
    return cpy_r_r37;
CPyL25: ;
    cpy_r_r38 = NULL;
    return cpy_r_r38;
CPyL26: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL6;
CPyL27: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL25;
CPyL28: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL25;
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
    arg_value = obj_value;
    if (arg_value != NULL) goto __LL1;
    CPy_TypeError("union[str, bytes, object]", obj_value); 
    goto fail;
__LL1: ;
    PyObject *retval = CPyDef_attempt_checksum(arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict\\_utils.py", "attempt_checksum", 19, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_checksum_or_raise(PyObject *cpy_r_string) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = CPyStatic_globals;
    cpy_r_r1 = CPyStatics[7]; /* 'to_checksum_address' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_or_raise", 34, CPyStatic_globals);
        goto CPyL4;
    }
    PyObject *cpy_r_r3[1] = {cpy_r_string};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = _PyObject_Vectorcall(cpy_r_r2, cpy_r_r4, 1, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_or_raise", 34, CPyStatic_globals);
        goto CPyL4;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[8]; /* 'ValueError' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_or_raise", 35, CPyStatic_globals);
        goto CPyL13;
    }
    cpy_r_r10 = CPy_ExceptionMatches(cpy_r_r9);
    CPy_DecRef(cpy_r_r9);
    if (!cpy_r_r10) goto CPyL11;
    cpy_r_r11 = CPy_GetExcValue();
    CPy_DecRef(cpy_r_r11);
    cpy_r_r12 = CPyStatics[9]; /* "'" */
    cpy_r_r13 = CPyStatics[10]; /* "' is not a valid ETH address" */
    cpy_r_r14 = CPyStr_Build(3, cpy_r_r12, cpy_r_string, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_or_raise", 36, CPyStatic_globals);
        goto CPyL13;
    }
    cpy_r_r15 = CPyModule_builtins;
    cpy_r_r16 = CPyStatics[8]; /* 'ValueError' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_or_raise", 36, CPyStatic_globals);
        goto CPyL16;
    }
    PyObject *cpy_r_r18[1] = {cpy_r_r14};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_r17, cpy_r_r19, 1, 0);
    CPy_DecRef(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_or_raise", 36, CPyStatic_globals);
        goto CPyL16;
    }
    CPy_DecRef(cpy_r_r14);
    CPy_Raise(cpy_r_r20);
    CPy_DecRef(cpy_r_r20);
    if (unlikely(!0)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_or_raise", 36, CPyStatic_globals);
        goto CPyL13;
    } else
        goto CPyL17;
CPyL10: ;
    CPy_Unreachable();
CPyL11: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL13;
    } else
        goto CPyL18;
CPyL12: ;
    CPy_Unreachable();
CPyL13: ;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DecRef(cpy_r_r6.f0);
    CPy_DecRef(cpy_r_r6.f1);
    CPy_DecRef(cpy_r_r6.f2);
    cpy_r_r21 = CPy_KeepPropagating();
    if (!cpy_r_r21) goto CPyL15;
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL16: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_r6.f0);
    CPy_DecRef(cpy_r_r6.f1);
    CPy_DecRef(cpy_r_r6.f2);
    goto CPyL10;
CPyL18: ;
    CPy_DecRef(cpy_r_r6.f0);
    CPy_DecRef(cpy_r_r6.f1);
    CPy_DecRef(cpy_r_r6.f2);
    goto CPyL12;
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
    CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_or_raise", 32, CPyStatic_globals);
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
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[11]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", -1, CPyStatic_globals);
        goto CPyL11;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[20]; /* ('Union',) */
    cpy_r_r6 = CPyStatics[13]; /* 'typing' */
    cpy_r_r7 = CPyStatic_globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 7, CPyStatic_globals);
        goto CPyL11;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_cchecksum;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {9};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[22]; /* (('cchecksum', 'cchecksum', 'cchecksum'),) */
    cpy_r_r15 = CPyStatic_globals;
    cpy_r_r16 = CPyStatics[15]; /* 'checksum_dict\\_utils.py' */
    cpy_r_r17 = CPyStatics[16]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL11;
    cpy_r_r19 = CPyStatics[23]; /* ('ChecksumAddress',) */
    cpy_r_r20 = CPyStatics[18]; /* 'eth_typing' */
    cpy_r_r21 = CPyStatic_globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 10, CPyStatic_globals);
        goto CPyL11;
    }
    CPyModule_eth_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[24]; /* ('Contract',) */
    cpy_r_r24 = CPyStatics[19]; /* 'checksum_dict._typing' */
    cpy_r_r25 = CPyStatic_globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 12, CPyStatic_globals);
        goto CPyL11;
    }
    CPyModule_checksum_dict____typing = cpy_r_r26;
    CPy_INCREF(CPyModule_checksum_dict____typing);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatic_globals;
    cpy_r_r28 = CPyStatics[14]; /* 'cchecksum' */
    cpy_r_r29 = CPyDict_GetItem(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 16, CPyStatic_globals);
        goto CPyL11;
    }
    cpy_r_r30 = CPyStatics[7]; /* 'to_checksum_address' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 16, CPyStatic_globals);
        goto CPyL11;
    }
    cpy_r_r32 = CPyStatic_globals;
    cpy_r_r33 = CPyStatics[7]; /* 'to_checksum_address' */
    cpy_r_r34 = CPyDict_SetItem(cpy_r_r32, cpy_r_r33, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 16, CPyStatic_globals);
        goto CPyL11;
    }
    return 1;
CPyL11: ;
    cpy_r_r36 = 2;
    return cpy_r_r36;
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
    CPyModule_checksum_dict____typing = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[25];
const char * const CPyLit_Str[] = {
    "\a\003hex\b__name__\bContract\aaddress\023to_checksum_address\nValueError\001\'",
    "\005\034\' is not a valid ETH address\bbuiltins\005Union\006typing\tcchecksum",
    "\004\027checksum_dict\\_utils.py\b<module>\017ChecksumAddress\neth_typing",
    "\001\025checksum_dict._typing",
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
const int CPyLit_Tuple[] = {5, 1, 12, 3, 14, 14, 14, 1, 21, 1, 17, 1, 5};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_checksum_dict____utils_internal = NULL;
CPyModule *CPyModule_checksum_dict____utils;
PyObject *CPyStatic_globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_cchecksum;
CPyModule *CPyModule_eth_typing;
CPyModule *CPyModule_checksum_dict____typing;
PyObject *CPyDef_attempt_checksum(PyObject *cpy_r_value);
PyObject *CPyPy_attempt_checksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_checksum_or_raise(PyObject *cpy_r_string);
PyObject *CPyPy_checksum_or_raise(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef___top_level__(void);

static struct export_table_checksum_dict____utils exports = {
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
