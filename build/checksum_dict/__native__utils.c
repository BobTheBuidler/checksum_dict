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
    {"_type_has_checksum_addr", (PyCFunction)CPyPy__type_has_checksum_addr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
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
    CPy_XDECREF(CPyStatic__KNOWN_CHECKSUMMED_TYPES);
    CPyStatic__KNOWN_CHECKSUMMED_TYPES = NULL;
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
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    cpy_r_r0 = (PyObject *)&PyUnicode_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_value, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", 30, CPyStatic_globals);
        goto CPyL27;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL5;
    CPy_INCREF(cpy_r_value);
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r4 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "attempt_checksum", 31, CPyStatic_globals, "str", cpy_r_value);
        goto CPyL27;
    }
    cpy_r_r5 = CPyDef_checksum_or_raise(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", 31, CPyStatic_globals);
        goto CPyL27;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = PyObject_Type(cpy_r_value);
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = (PyObject *)&PyBytes_Type;
    cpy_r_r8 = cpy_r_r6 == cpy_r_r7;
    CPy_DECREF(cpy_r_r6);
    if (cpy_r_r8) {
        goto CPyL28;
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
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", 33, CPyStatic_globals);
        goto CPyL29;
    }
    CPy_DECREF(cpy_r_r9);
    cpy_r_r14 = cpy_r_r13;
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "attempt_checksum", 33, CPyStatic_globals, "str", cpy_r_r14);
        goto CPyL27;
    }
    cpy_r_r16 = CPyDef_checksum_or_raise(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", 33, CPyStatic_globals);
        goto CPyL27;
    }
    return cpy_r_r16;
CPyL11: ;
    cpy_r_r17 = CPyDef__type_has_checksum_addr(cpy_r_r6);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", 34, CPyStatic_globals);
        goto CPyL30;
    }
    if (cpy_r_r17) {
        goto CPyL31;
    } else
        goto CPyL16;
CPyL13: ;
    CPy_INCREF(cpy_r_value);
    cpy_r_r18 = cpy_r_value;
    cpy_r_r19 = CPyStatics[4]; /* 'address' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", 35, CPyStatic_globals);
        goto CPyL27;
    }
    return cpy_r_r20;
CPyL16: ;
    cpy_r_r21 = CPyStatics[4]; /* 'address' */
    cpy_r_r22 = PyObject_HasAttr(cpy_r_r6, cpy_r_r21);
    CPy_DECREF(cpy_r_r6);
    if (!cpy_r_r22) goto CPyL22;
    CPy_INCREF(cpy_r_value);
    cpy_r_r23 = cpy_r_value;
    cpy_r_r24 = CPyStatics[4]; /* 'address' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", 37, CPyStatic_globals);
        goto CPyL27;
    }
    if (likely(PyUnicode_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "attempt_checksum", 37, CPyStatic_globals, "str", cpy_r_r25);
        goto CPyL27;
    }
    cpy_r_r27 = CPyDef_checksum_or_raise(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", 37, CPyStatic_globals);
        goto CPyL27;
    }
    return cpy_r_r27;
CPyL22: ;
    CPy_INCREF(cpy_r_value);
    cpy_r_r28 = cpy_r_value;
    cpy_r_r29 = CPyStatics[3]; /* 'hex' */
    PyObject *cpy_r_r30[1] = {cpy_r_r28};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = PyObject_VectorcallMethod(cpy_r_r29, cpy_r_r31, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", 39, CPyStatic_globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_r28);
    cpy_r_r33 = cpy_r_r32;
    if (likely(PyUnicode_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "attempt_checksum", 39, CPyStatic_globals, "str", cpy_r_r33);
        goto CPyL27;
    }
    cpy_r_r35 = CPyDef_checksum_or_raise(cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", 39, CPyStatic_globals);
        goto CPyL27;
    }
    return cpy_r_r35;
CPyL27: ;
    cpy_r_r36 = NULL;
    return cpy_r_r36;
CPyL28: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL6;
CPyL29: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL27;
CPyL31: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL13;
CPyL32: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL27;
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
    CPy_AddTraceback("checksum_dict/_utils.py", "attempt_checksum", 28, CPyStatic_globals);
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
    cpy_r_r1 = CPyStatics[5]; /* 'to_checksum_address' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", 44, CPyStatic_globals);
        goto CPyL4;
    }
    PyObject *cpy_r_r3[1] = {cpy_r_string};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = _PyObject_Vectorcall(cpy_r_r2, cpy_r_r4, 1, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", 44, CPyStatic_globals);
        goto CPyL4;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[6]; /* 'ValueError' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", 45, CPyStatic_globals);
        goto CPyL13;
    }
    cpy_r_r10 = CPy_ExceptionMatches(cpy_r_r9);
    CPy_DecRef(cpy_r_r9);
    if (!cpy_r_r10) goto CPyL11;
    cpy_r_r11 = CPy_GetExcValue();
    CPy_DecRef(cpy_r_r11);
    cpy_r_r12 = CPyStatics[7]; /* "'" */
    cpy_r_r13 = CPyStatics[8]; /* "' is not a valid ETH address" */
    cpy_r_r14 = CPyStr_Build(3, cpy_r_r12, cpy_r_string, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", 46, CPyStatic_globals);
        goto CPyL13;
    }
    cpy_r_r15 = CPyModule_builtins;
    cpy_r_r16 = CPyStatics[6]; /* 'ValueError' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", 46, CPyStatic_globals);
        goto CPyL16;
    }
    PyObject *cpy_r_r18[1] = {cpy_r_r14};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_r17, cpy_r_r19, 1, 0);
    CPy_DecRef(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", 46, CPyStatic_globals);
        goto CPyL16;
    }
    CPy_DecRef(cpy_r_r14);
    CPy_Raise(cpy_r_r20);
    CPy_DecRef(cpy_r_r20);
    if (unlikely(!0)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", 46, CPyStatic_globals);
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
    CPy_AddTraceback("checksum_dict/_utils.py", "checksum_or_raise", 42, CPyStatic_globals);
    return NULL;
}

char CPyDef__type_has_checksum_addr(PyObject *cpy_r_typ) {
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
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    cpy_r_r0 = CPyStatic__KNOWN_CHECKSUMMED_TYPES;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"_KNOWN_CHECKSUMMED_TYPES\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 50, CPyStatic_globals);
        goto CPyL25;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = CPyDict_GetWithNone(cpy_r_r0, cpy_r_typ);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 50, CPyStatic_globals);
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
    CPy_TypeErrorTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 50, CPyStatic_globals, "bool or None", cpy_r_r2);
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
    cpy_r_r6 = CPyStatics[37]; /* frozenset({'Contract', 'ERC20'}) */
    cpy_r_r7 = CPyStatics[11]; /* '__name__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_typ, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 52, CPyStatic_globals);
        goto CPyL25;
    }
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 52, CPyStatic_globals, "str", cpy_r_r8);
        goto CPyL25;
    }
    cpy_r_r10 = PySet_Contains(cpy_r_r6, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 52, CPyStatic_globals);
        goto CPyL25;
    }
    cpy_r_r12 = cpy_r_r10;
    if (cpy_r_r12) goto CPyL11;
    cpy_r_r13 = cpy_r_r12;
    goto CPyL18;
CPyL11: ;
    cpy_r_r14 = CPyStatics[38]; /* frozenset({'y', 'dank_mids', 'brownie'}) */
    cpy_r_r15 = CPyStatics[15]; /* '__module__' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_typ, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 52, CPyStatic_globals);
        goto CPyL25;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 52, CPyStatic_globals, "str", cpy_r_r16);
        goto CPyL25;
    }
    cpy_r_r18 = CPyStatics[16]; /* '.' */
    cpy_r_r19 = PyUnicode_Split(cpy_r_r17, cpy_r_r18, -1);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 52, CPyStatic_globals);
        goto CPyL25;
    }
    cpy_r_r20 = CPyList_GetItemShort(cpy_r_r19, 0);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 52, CPyStatic_globals);
        goto CPyL25;
    }
    if (likely(PyUnicode_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 52, CPyStatic_globals, "str", cpy_r_r20);
        goto CPyL25;
    }
    cpy_r_r22 = PySet_Contains(cpy_r_r14, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 52, CPyStatic_globals);
        goto CPyL25;
    }
    cpy_r_r24 = cpy_r_r22;
    cpy_r_r13 = cpy_r_r24;
CPyL18: ;
    cpy_r_r25 = cpy_r_r13 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r25);
    cpy_r_has_checksum_addr = cpy_r_r25;
    if (unlikely(!PyBool_Check(cpy_r_has_checksum_addr))) {
        CPy_TypeError("bool", cpy_r_has_checksum_addr); cpy_r_r26 = 2;
    } else
        cpy_r_r26 = cpy_r_has_checksum_addr == Py_True;
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 55, CPyStatic_globals);
        goto CPyL27;
    }
    cpy_r_r27 = CPyStatic__KNOWN_CHECKSUMMED_TYPES;
    if (unlikely(cpy_r_r27 == NULL)) {
        goto CPyL28;
    } else
        goto CPyL22;
CPyL20: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_KNOWN_CHECKSUMMED_TYPES\" was not set");
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 55, CPyStatic_globals);
        goto CPyL25;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r29 = cpy_r_r26 ? Py_True : Py_False;
    cpy_r_r30 = CPyDict_SetItem(cpy_r_r27, cpy_r_typ, cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 55, CPyStatic_globals);
        goto CPyL27;
    }
CPyL23: ;
    if (unlikely(!PyBool_Check(cpy_r_has_checksum_addr))) {
        CPy_TypeError("bool", cpy_r_has_checksum_addr); cpy_r_r32 = 2;
    } else
        cpy_r_r32 = cpy_r_has_checksum_addr == Py_True;
    CPy_DECREF(cpy_r_has_checksum_addr);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 56, CPyStatic_globals);
        goto CPyL25;
    }
    return cpy_r_r32;
CPyL25: ;
    cpy_r_r33 = 2;
    return cpy_r_r33;
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

PyObject *CPyPy__type_has_checksum_addr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:_type_has_checksum_addr", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ = obj_typ;
    char retval = CPyDef__type_has_checksum_addr(arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("checksum_dict/_utils.py", "_type_has_checksum_addr", 49, CPyStatic_globals);
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
    int32_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[17]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", -1, CPyStatic_globals);
        goto CPyL14;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[32]; /* ('TYPE_CHECKING', 'Dict', 'Final', 'Type', 'Union') */
    cpy_r_r6 = CPyStatics[23]; /* 'typing' */
    cpy_r_r7 = CPyStatic_globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 7, CPyStatic_globals);
        goto CPyL14;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_cchecksum;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {9};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[34]; /* (('cchecksum', 'cchecksum', 'cchecksum'),) */
    cpy_r_r15 = CPyStatic_globals;
    cpy_r_r16 = CPyStatics[25]; /* 'checksum_dict/_utils.py' */
    cpy_r_r17 = CPyStatics[26]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL14;
    cpy_r_r19 = CPyStatics[35]; /* ('ChecksumAddress',) */
    cpy_r_r20 = CPyStatics[28]; /* 'eth_typing' */
    cpy_r_r21 = CPyStatic_globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 10, CPyStatic_globals);
        goto CPyL14;
    }
    CPyModule_eth_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[36]; /* ('_typing',) */
    cpy_r_r24 = CPyStatics[30]; /* 'checksum_dict' */
    cpy_r_r25 = CPyStatic_globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 12, CPyStatic_globals);
        goto CPyL14;
    }
    CPyModule_checksum_dict = cpy_r_r26;
    CPy_INCREF(CPyModule_checksum_dict);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = PyDict_New();
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 22, CPyStatic_globals);
        goto CPyL14;
    }
    CPyStatic__KNOWN_CHECKSUMMED_TYPES = cpy_r_r27;
    CPy_INCREF(CPyStatic__KNOWN_CHECKSUMMED_TYPES);
    cpy_r_r28 = CPyStatic_globals;
    cpy_r_r29 = CPyStatics[31]; /* '_KNOWN_CHECKSUMMED_TYPES' */
    cpy_r_r30 = CPyDict_SetItem(cpy_r_r28, cpy_r_r29, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 22, CPyStatic_globals);
        goto CPyL14;
    }
    cpy_r_r32 = CPyStatic_globals;
    cpy_r_r33 = CPyStatics[24]; /* 'cchecksum' */
    cpy_r_r34 = CPyDict_GetItem(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 25, CPyStatic_globals);
        goto CPyL14;
    }
    cpy_r_r35 = CPyStatics[5]; /* 'to_checksum_address' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 25, CPyStatic_globals);
        goto CPyL14;
    }
    cpy_r_r37 = CPyStatic_globals;
    cpy_r_r38 = CPyStatics[5]; /* 'to_checksum_address' */
    cpy_r_r39 = CPyDict_SetItem(cpy_r_r37, cpy_r_r38, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("checksum_dict/_utils.py", "<module>", 25, CPyStatic_globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r41 = 2;
    return cpy_r_r41;
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
    CPyModule_checksum_dict = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[39];
const char * const CPyLit_Str[] = {
    "\005\003hex\aaddress\023to_checksum_address\nValueError\001\'",
    "\006\034\' is not a valid ETH address\bContract\005ERC20\b__name__\001y\tdank_mids",
    "\t\abrownie\n__module__\001.\bbuiltins\rTYPE_CHECKING\004Dict\005Final\004Type\005Union",
    "\005\006typing\tcchecksum\027checksum_dict/_utils.py\b<module>\017ChecksumAddress",
    "\004\neth_typing\a_typing\rchecksum_dict\030_KNOWN_CHECKSUMMED_TYPES",
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
const int CPyLit_Tuple[] = {5, 5, 18, 19, 20, 21, 22, 3, 24, 24, 24, 1, 33, 1, 27, 1, 29};
const int CPyLit_FrozenSet[] = {2, 2, 9, 10, 3, 12, 13, 14};
CPyModule *CPyModule_checksum_dict____utils_internal = NULL;
CPyModule *CPyModule_checksum_dict____utils;
PyObject *CPyStatic_globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_cchecksum;
CPyModule *CPyModule_eth_typing;
CPyModule *CPyModule_checksum_dict;
PyObject *CPyStatic__KNOWN_CHECKSUMMED_TYPES = NULL;
PyObject *CPyDef_attempt_checksum(PyObject *cpy_r_value);
PyObject *CPyPy_attempt_checksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_checksum_or_raise(PyObject *cpy_r_string);
PyObject *CPyPy_checksum_or_raise(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__type_has_checksum_addr(PyObject *cpy_r_typ);
PyObject *CPyPy__type_has_checksum_addr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef___top_level__(void);

static struct export_table_checksum_dict____utils exports = {
    &CPyStatic__KNOWN_CHECKSUMMED_TYPES,
    &CPyDef_attempt_checksum,
    &CPyDef_checksum_or_raise,
    &CPyDef__type_has_checksum_addr,
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
