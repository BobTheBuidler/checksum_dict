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
    {"checksum_value", (PyCFunction)CPyPy_checksum_value, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"to_bytes", (PyCFunction)CPyPy_to_bytes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"hexstr_to_bytes", (PyCFunction)CPyPy_hexstr_to_bytes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
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
    CPy_XDECREF(CPyStatic_HexBytes);
    CPyStatic_HexBytes = NULL;
    CPy_XDECREF(CPyStatic_to_checksum_address);
    CPyStatic_to_checksum_address = NULL;
    CPy_XDECREF(CPyStatic_unhexlify);
    CPyStatic_unhexlify = NULL;
    return NULL;
}

PyObject *CPyDef_checksum_value(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_converted_value;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject **cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject **cpy_r_r58;
    PyObject *cpy_r_r59;
    tuple_T3OOO cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject **cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    cpy_r_r0 = (PyObject *)&PyUnicode_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_value, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_value", 33, CPyStatic_globals);
        goto CPyL50;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL12;
    CPy_INCREF(cpy_r_value);
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r4 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "checksum_value", 34, CPyStatic_globals, "str", cpy_r_value);
        goto CPyL50;
    }
    cpy_r_r5 = CPyStatics[3]; /* '0x' */
    cpy_r_r6 = CPyStatics[4]; /* '0X' */
    CPy_INCREF(cpy_r_r5);
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7.f0 = cpy_r_r5;
    cpy_r_r7.f1 = cpy_r_r6;
    cpy_r_r8 = CPyStatics[5]; /* 'startswith' */
    cpy_r_r9 = PyTuple_New(2);
    if (unlikely(cpy_r_r9 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1 = cpy_r_r7.f0;
    PyTuple_SET_ITEM(cpy_r_r9, 0, __tmp1);
    PyObject *__tmp2 = cpy_r_r7.f1;
    PyTuple_SET_ITEM(cpy_r_r9, 1, __tmp2);
    PyObject *cpy_r_r10[2] = {cpy_r_r4, cpy_r_r9};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_VectorcallMethod(cpy_r_r8, cpy_r_r11, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_value", 34, CPyStatic_globals);
        goto CPyL51;
    }
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(!PyBool_Check(cpy_r_r12))) {
        CPy_TypeError("bool", cpy_r_r12); cpy_r_r13 = 2;
    } else
        cpy_r_r13 = cpy_r_r12 == Py_True;
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_value", 34, CPyStatic_globals);
        goto CPyL50;
    }
    if (!cpy_r_r13) goto CPyL8;
    CPy_INCREF(cpy_r_value);
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r14 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "checksum_value", 34, CPyStatic_globals, "str", cpy_r_value);
        goto CPyL50;
    }
    cpy_r_r15 = cpy_r_r14;
    goto CPyL11;
CPyL8: ;
    cpy_r_r16 = CPyStatics[3]; /* '0x' */
    CPy_INCREF(cpy_r_value);
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r17 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "checksum_value", 34, CPyStatic_globals, "str", cpy_r_value);
        goto CPyL50;
    }
    cpy_r_r18 = CPyStr_Build(2, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_value", 34, CPyStatic_globals);
        goto CPyL50;
    }
    cpy_r_r15 = cpy_r_r18;
CPyL11: ;
    cpy_r_converted_value = cpy_r_r15;
    goto CPyL34;
CPyL12: ;
    CPy_INCREF(cpy_r_value);
    if (likely(PyBytes_Check(cpy_r_value) || PyByteArray_Check(cpy_r_value)))
        cpy_r_r19 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "checksum_value", 36, CPyStatic_globals, "bytes", cpy_r_value);
        goto CPyL50;
    }
    cpy_r_r20 = PyObject_Type(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = (PyObject *)&PyBytes_Type;
    cpy_r_r22 = cpy_r_r20 == cpy_r_r21;
    if (cpy_r_r22) {
        goto CPyL52;
    } else
        goto CPyL19;
CPyL14: ;
    cpy_r_r23 = CPyStatics[3]; /* '0x' */
    CPy_INCREF(cpy_r_value);
    if (likely(PyBytes_Check(cpy_r_value) || PyByteArray_Check(cpy_r_value)))
        cpy_r_r24 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "checksum_value", 38, CPyStatic_globals, "bytes", cpy_r_value);
        goto CPyL50;
    }
    cpy_r_r25 = CPyStatics[6]; /* 'hex' */
    PyObject *cpy_r_r26[1] = {cpy_r_r24};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_VectorcallMethod(cpy_r_r25, cpy_r_r27, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_value", 38, CPyStatic_globals);
        goto CPyL53;
    }
    CPy_DECREF(cpy_r_r24);
    if (likely(PyUnicode_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "checksum_value", 38, CPyStatic_globals, "str", cpy_r_r28);
        goto CPyL50;
    }
    cpy_r_r30 = CPyStr_Build(2, cpy_r_r23, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_value", 38, CPyStatic_globals);
        goto CPyL50;
    }
    cpy_r_converted_value = cpy_r_r30;
    goto CPyL34;
CPyL19: ;
    cpy_r_r31 = CPyStatics[7]; /* '__name__' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r31);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_value", 40, CPyStatic_globals);
        goto CPyL50;
    }
    if (likely(PyUnicode_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "checksum_value", 40, CPyStatic_globals, "str", cpy_r_r32);
        goto CPyL50;
    }
    cpy_r_r34 = CPyStatics[8]; /* 'HexBytes' */
    cpy_r_r35 = PyUnicode_Compare(cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r36 = cpy_r_r35 == -1;
    if (!cpy_r_r36) goto CPyL24;
    cpy_r_r37 = PyErr_Occurred();
    cpy_r_r38 = cpy_r_r37 != NULL;
    if (!cpy_r_r38) goto CPyL24;
    cpy_r_r39 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_value", 40, CPyStatic_globals);
        goto CPyL50;
    }
CPyL24: ;
    cpy_r_r40 = cpy_r_r35 == 0;
    if (!cpy_r_r40) goto CPyL29;
    CPy_INCREF(cpy_r_value);
    if (likely(PyBytes_Check(cpy_r_value) || PyByteArray_Check(cpy_r_value)))
        cpy_r_r41 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "checksum_value", 41, CPyStatic_globals, "bytes", cpy_r_value);
        goto CPyL50;
    }
    cpy_r_r42 = CPyStatics[6]; /* 'hex' */
    PyObject *cpy_r_r43[1] = {cpy_r_r41};
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = PyObject_VectorcallMethod(cpy_r_r42, cpy_r_r44, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_value", 41, CPyStatic_globals);
        goto CPyL54;
    }
    CPy_DECREF(cpy_r_r41);
    if (likely(PyUnicode_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "checksum_value", 41, CPyStatic_globals, "str", cpy_r_r45);
        goto CPyL50;
    }
    cpy_r_converted_value = cpy_r_r46;
    goto CPyL34;
CPyL29: ;
    cpy_r_r47 = CPyStatics[3]; /* '0x' */
    CPy_INCREF(cpy_r_value);
    if (likely(PyBytes_Check(cpy_r_value) || PyByteArray_Check(cpy_r_value)))
        cpy_r_r48 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "checksum_value", 43, CPyStatic_globals, "bytes", cpy_r_value);
        goto CPyL50;
    }
    cpy_r_r49 = CPyStatics[6]; /* 'hex' */
    PyObject *cpy_r_r50[1] = {cpy_r_r48};
    cpy_r_r51 = (PyObject **)&cpy_r_r50;
    cpy_r_r52 = PyObject_VectorcallMethod(cpy_r_r49, cpy_r_r51, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_value", 43, CPyStatic_globals);
        goto CPyL55;
    }
    CPy_DECREF(cpy_r_r48);
    if (likely(PyUnicode_Check(cpy_r_r52)))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "checksum_value", 43, CPyStatic_globals, "str", cpy_r_r52);
        goto CPyL50;
    }
    cpy_r_r54 = CPyStr_Build(2, cpy_r_r47, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_value", 43, CPyStatic_globals);
        goto CPyL50;
    }
    cpy_r_converted_value = cpy_r_r54;
CPyL34: ;
    cpy_r_r55 = CPyStatic_to_checksum_address;
    if (likely(cpy_r_r55 != NULL)) goto CPyL37;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_checksum_address\" was not set");
    cpy_r_r56 = 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_value", 45, CPyStatic_globals);
        goto CPyL39;
    } else
        goto CPyL56;
CPyL36: ;
    CPy_Unreachable();
CPyL37: ;
    PyObject *cpy_r_r57[1] = {cpy_r_converted_value};
    cpy_r_r58 = (PyObject **)&cpy_r_r57;
    cpy_r_r59 = _PyObject_Vectorcall(cpy_r_r55, cpy_r_r58, 1, 0);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_value", 45, CPyStatic_globals);
        goto CPyL39;
    }
    CPy_DECREF(cpy_r_converted_value);
    return cpy_r_r59;
CPyL39: ;
    cpy_r_r60 = CPy_CatchError();
    cpy_r_r61 = CPyModule_builtins;
    cpy_r_r62 = CPyStatics[9]; /* 'ValueError' */
    cpy_r_r63 = CPyObject_GetAttr(cpy_r_r61, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_value", 46, CPyStatic_globals);
        goto CPyL57;
    }
    cpy_r_r64 = CPy_ExceptionMatches(cpy_r_r63);
    CPy_DecRef(cpy_r_r63);
    if (!cpy_r_r64) goto CPyL58;
    cpy_r_r65 = CPy_GetExcValue();
    CPy_DecRef(cpy_r_r65);
    cpy_r_r66 = CPyStatics[10]; /* "'" */
    cpy_r_r67 = CPyStatics[11]; /* "' is not a valid ETH address" */
    cpy_r_r68 = CPyStr_Build(3, cpy_r_r66, cpy_r_converted_value, cpy_r_r67);
    CPy_DecRef(cpy_r_converted_value);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_value", 47, CPyStatic_globals);
        goto CPyL48;
    }
    cpy_r_r69 = CPyModule_builtins;
    cpy_r_r70 = CPyStatics[9]; /* 'ValueError' */
    cpy_r_r71 = CPyObject_GetAttr(cpy_r_r69, cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_value", 47, CPyStatic_globals);
        goto CPyL59;
    }
    PyObject *cpy_r_r72[1] = {cpy_r_r68};
    cpy_r_r73 = (PyObject **)&cpy_r_r72;
    cpy_r_r74 = _PyObject_Vectorcall(cpy_r_r71, cpy_r_r73, 1, 0);
    CPy_DecRef(cpy_r_r71);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_value", 47, CPyStatic_globals);
        goto CPyL59;
    }
    CPy_DecRef(cpy_r_r68);
    CPy_Raise(cpy_r_r74);
    CPy_DecRef(cpy_r_r74);
    if (unlikely(!0)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_value", 47, CPyStatic_globals);
        goto CPyL48;
    } else
        goto CPyL60;
CPyL45: ;
    CPy_Unreachable();
CPyL46: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL48;
    } else
        goto CPyL61;
CPyL47: ;
    CPy_Unreachable();
CPyL48: ;
    CPy_RestoreExcInfo(cpy_r_r60);
    CPy_DecRef(cpy_r_r60.f0);
    CPy_DecRef(cpy_r_r60.f1);
    CPy_DecRef(cpy_r_r60.f2);
    cpy_r_r75 = CPy_KeepPropagating();
    if (!cpy_r_r75) goto CPyL50;
    CPy_Unreachable();
CPyL50: ;
    cpy_r_r76 = NULL;
    return cpy_r_r76;
CPyL51: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r9);
    goto CPyL50;
CPyL52: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL14;
CPyL53: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL50;
CPyL54: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL50;
CPyL55: ;
    CPy_DecRef(cpy_r_r48);
    goto CPyL50;
CPyL56: ;
    CPy_DecRef(cpy_r_converted_value);
    goto CPyL36;
CPyL57: ;
    CPy_DecRef(cpy_r_converted_value);
    goto CPyL48;
CPyL58: ;
    CPy_DecRef(cpy_r_converted_value);
    goto CPyL46;
CPyL59: ;
    CPy_DecRef(cpy_r_r68);
    goto CPyL48;
CPyL60: ;
    CPy_DecRef(cpy_r_r60.f0);
    CPy_DecRef(cpy_r_r60.f1);
    CPy_DecRef(cpy_r_r60.f2);
    goto CPyL45;
CPyL61: ;
    CPy_DecRef(cpy_r_r60.f0);
    CPy_DecRef(cpy_r_r60.f1);
    CPy_DecRef(cpy_r_r60.f2);
    goto CPyL47;
}

PyObject *CPyPy_checksum_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:checksum_value", kwlist, 0};
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
    if (arg_value != NULL) goto __LL3;
    if (PyBytes_Check(obj_value) || PyByteArray_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL3;
    CPy_TypeError("union[str, bytes]", obj_value); 
    goto fail;
__LL3: ;
    PyObject *retval = CPyDef_checksum_value(arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict\\_utils.py", "checksum_value", 32, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_to_bytes(PyObject *cpy_r_val) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    CPyTagged cpy_r_r34;
    int64_t cpy_r_r35;
    char cpy_r_r36;
    int64_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject **cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject **cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject **cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject **cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyPtr cpy_r_r81;
    CPyPtr cpy_r_r82;
    CPyPtr cpy_r_r83;
    CPyPtr cpy_r_r84;
    CPyPtr cpy_r_r85;
    CPyPtr cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject **cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    cpy_r_r0 = (PyObject *)&PyBytes_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_val, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 81, CPyStatic_globals);
        goto CPyL51;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL4;
    CPy_INCREF(cpy_r_val);
    if (likely(PyBytes_Check(cpy_r_val) || PyByteArray_Check(cpy_r_val)))
        cpy_r_r4 = cpy_r_val;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "to_bytes", 82, CPyStatic_globals, "bytes", cpy_r_val);
        goto CPyL51;
    }
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = (PyObject *)&PyUnicode_Type;
    cpy_r_r6 = PyObject_IsInstance(cpy_r_val, cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 83, CPyStatic_globals);
        goto CPyL51;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL9;
    CPy_INCREF(cpy_r_val);
    if (likely(PyUnicode_Check(cpy_r_val)))
        cpy_r_r9 = cpy_r_val;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "to_bytes", 84, CPyStatic_globals, "str", cpy_r_val);
        goto CPyL51;
    }
    cpy_r_r10 = CPyDef_hexstr_to_bytes(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 84, CPyStatic_globals);
        goto CPyL51;
    }
    return cpy_r_r10;
CPyL9: ;
    cpy_r_r11 = CPyModule_builtins;
    cpy_r_r12 = CPyStatics[12]; /* 'bytearray' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 85, CPyStatic_globals);
        goto CPyL51;
    }
    cpy_r_r14 = PyObject_IsInstance(cpy_r_val, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 85, CPyStatic_globals);
        goto CPyL51;
    }
    cpy_r_r16 = cpy_r_r14;
    if (!cpy_r_r16) goto CPyL15;
    cpy_r_r17 = (PyObject *)&PyBytes_Type;
    PyObject *cpy_r_r18[1] = {cpy_r_val};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_r17, cpy_r_r19, 1, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 86, CPyStatic_globals);
        goto CPyL51;
    }
    if (likely(PyBytes_Check(cpy_r_r20) || PyByteArray_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "to_bytes", 86, CPyStatic_globals, "bytes", cpy_r_r20);
        goto CPyL51;
    }
    return cpy_r_r21;
CPyL15: ;
    cpy_r_r22 = (PyObject *)&PyBool_Type;
    cpy_r_r23 = PyObject_IsInstance(cpy_r_val, cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 87, CPyStatic_globals);
        goto CPyL51;
    }
    cpy_r_r25 = cpy_r_r23;
    if (!cpy_r_r25) goto CPyL22;
    if (unlikely(!PyBool_Check(cpy_r_val))) {
        CPy_TypeError("bool", cpy_r_val); cpy_r_r26 = 2;
    } else
        cpy_r_r26 = cpy_r_val == Py_True;
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 88, CPyStatic_globals);
        goto CPyL51;
    }
    if (!cpy_r_r26) goto CPyL20;
    cpy_r_r27 = CPyStatics[48]; /* b'\x01' */
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = cpy_r_r27;
    goto CPyL21;
CPyL20: ;
    cpy_r_r29 = CPyStatics[49]; /* b'\x00' */
    CPy_INCREF(cpy_r_r29);
    cpy_r_r28 = cpy_r_r29;
CPyL21: ;
    return cpy_r_r28;
CPyL22: ;
    cpy_r_r30 = (PyObject *)&PyLong_Type;
    cpy_r_r31 = PyObject_IsInstance(cpy_r_val, cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 89, CPyStatic_globals);
        goto CPyL51;
    }
    cpy_r_r33 = cpy_r_r31;
    if (!cpy_r_r33) goto CPyL43;
    if (likely(PyLong_Check(cpy_r_val)))
        cpy_r_r34 = CPyTagged_FromObject(cpy_r_val);
    else {
        CPy_TypeError("int", cpy_r_val); cpy_r_r34 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r34 == CPY_INT_TAG)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 92, CPyStatic_globals);
        goto CPyL51;
    }
    cpy_r_r35 = cpy_r_r34 & 1;
    cpy_r_r36 = cpy_r_r35 != 0;
    if (cpy_r_r36) goto CPyL27;
    cpy_r_r37 = 0 & 1;
    cpy_r_r38 = cpy_r_r37 != 0;
    if (!cpy_r_r38) goto CPyL28;
CPyL27: ;
    cpy_r_r39 = CPyTagged_IsLt_(cpy_r_r34, 0);
    cpy_r_r40 = cpy_r_r39;
    goto CPyL29;
CPyL28: ;
    cpy_r_r41 = (Py_ssize_t)cpy_r_r34 < (Py_ssize_t)0;
    cpy_r_r40 = cpy_r_r41;
CPyL29: ;
    CPyTagged_DECREF(cpy_r_r34);
    if (!cpy_r_r40) goto CPyL37;
    cpy_r_r42 = CPyStatics[13]; /* 'Cannot convert negative integer ' */
    if (likely(PyLong_Check(cpy_r_val)))
        cpy_r_r43 = CPyTagged_FromObject(cpy_r_val);
    else {
        CPy_TypeError("int", cpy_r_val); cpy_r_r43 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r43 == CPY_INT_TAG)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 93, CPyStatic_globals);
        goto CPyL51;
    }
    cpy_r_r44 = CPyTagged_Str(cpy_r_r43);
    CPyTagged_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 93, CPyStatic_globals);
        goto CPyL51;
    }
    cpy_r_r45 = CPyStatics[14]; /* ' to bytes' */
    cpy_r_r46 = CPyStr_Build(3, cpy_r_r42, cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 93, CPyStatic_globals);
        goto CPyL51;
    }
    cpy_r_r47 = CPyModule_builtins;
    cpy_r_r48 = CPyStatics[9]; /* 'ValueError' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 93, CPyStatic_globals);
        goto CPyL52;
    }
    PyObject *cpy_r_r50[1] = {cpy_r_r46};
    cpy_r_r51 = (PyObject **)&cpy_r_r50;
    cpy_r_r52 = _PyObject_Vectorcall(cpy_r_r49, cpy_r_r51, 1, 0);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 93, CPyStatic_globals);
        goto CPyL52;
    }
    CPy_DECREF(cpy_r_r46);
    CPy_Raise(cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(!0)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 93, CPyStatic_globals);
        goto CPyL51;
    }
    CPy_Unreachable();
CPyL37: ;
    if (likely(PyLong_Check(cpy_r_val)))
        cpy_r_r53 = CPyTagged_FromObject(cpy_r_val);
    else {
        CPy_TypeError("int", cpy_r_val); cpy_r_r53 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r53 == CPY_INT_TAG)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 95, CPyStatic_globals);
        goto CPyL51;
    }
    cpy_r_r54 = CPyModule_builtins;
    cpy_r_r55 = CPyStatics[6]; /* 'hex' */
    cpy_r_r56 = CPyObject_GetAttr(cpy_r_r54, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 95, CPyStatic_globals);
        goto CPyL53;
    }
    cpy_r_r57 = CPyTagged_StealAsObject(cpy_r_r53);
    PyObject *cpy_r_r58[1] = {cpy_r_r57};
    cpy_r_r59 = (PyObject **)&cpy_r_r58;
    cpy_r_r60 = _PyObject_Vectorcall(cpy_r_r56, cpy_r_r59, 1, 0);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 95, CPyStatic_globals);
        goto CPyL54;
    }
    CPy_DECREF(cpy_r_r57);
    if (likely(PyUnicode_Check(cpy_r_r60)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "to_bytes", 95, CPyStatic_globals, "str", cpy_r_r60);
        goto CPyL51;
    }
    cpy_r_r62 = CPyDef_to_bytes(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 95, CPyStatic_globals);
        goto CPyL51;
    }
    return cpy_r_r62;
CPyL43: ;
    cpy_r_r63 = CPyStatics[15]; /* '' */
    cpy_r_r64 = CPyStatics[16]; /* 'Cannot convert ' */
    cpy_r_r65 = CPyStatics[17]; /* '{!r:{}}' */
    cpy_r_r66 = CPyStatics[15]; /* '' */
    cpy_r_r67 = CPyStatics[18]; /* 'format' */
    PyObject *cpy_r_r68[3] = {cpy_r_r65, cpy_r_val, cpy_r_r66};
    cpy_r_r69 = (PyObject **)&cpy_r_r68;
    cpy_r_r70 = PyObject_VectorcallMethod(cpy_r_r67, cpy_r_r69, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 97, CPyStatic_globals);
        goto CPyL51;
    }
    cpy_r_r71 = CPyStatics[19]; /* ' of type ' */
    cpy_r_r72 = CPyStatics[20]; /* '{:{}}' */
    cpy_r_r73 = PyObject_Type(cpy_r_val);
    cpy_r_r74 = CPyStatics[15]; /* '' */
    cpy_r_r75 = CPyStatics[18]; /* 'format' */
    PyObject *cpy_r_r76[3] = {cpy_r_r72, cpy_r_r73, cpy_r_r74};
    cpy_r_r77 = (PyObject **)&cpy_r_r76;
    cpy_r_r78 = PyObject_VectorcallMethod(cpy_r_r75, cpy_r_r77, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 97, CPyStatic_globals);
        goto CPyL55;
    }
    CPy_DECREF(cpy_r_r73);
    cpy_r_r79 = CPyStatics[14]; /* ' to bytes' */
    cpy_r_r80 = PyList_New(5);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 97, CPyStatic_globals);
        goto CPyL56;
    }
    cpy_r_r81 = (CPyPtr)&((PyListObject *)cpy_r_r80)->ob_item;
    cpy_r_r82 = *(CPyPtr *)cpy_r_r81;
    CPy_INCREF(cpy_r_r64);
    *(PyObject * *)cpy_r_r82 = cpy_r_r64;
    cpy_r_r83 = cpy_r_r82 + 8;
    *(PyObject * *)cpy_r_r83 = cpy_r_r70;
    CPy_INCREF(cpy_r_r71);
    cpy_r_r84 = cpy_r_r82 + 16;
    *(PyObject * *)cpy_r_r84 = cpy_r_r71;
    cpy_r_r85 = cpy_r_r82 + 24;
    *(PyObject * *)cpy_r_r85 = cpy_r_r78;
    CPy_INCREF(cpy_r_r79);
    cpy_r_r86 = cpy_r_r82 + 32;
    *(PyObject * *)cpy_r_r86 = cpy_r_r79;
    cpy_r_r87 = PyUnicode_Join(cpy_r_r63, cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 97, CPyStatic_globals);
        goto CPyL51;
    }
    cpy_r_r88 = CPyModule_builtins;
    cpy_r_r89 = CPyStatics[21]; /* 'TypeError' */
    cpy_r_r90 = CPyObject_GetAttr(cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 97, CPyStatic_globals);
        goto CPyL57;
    }
    PyObject *cpy_r_r91[1] = {cpy_r_r87};
    cpy_r_r92 = (PyObject **)&cpy_r_r91;
    cpy_r_r93 = _PyObject_Vectorcall(cpy_r_r90, cpy_r_r92, 1, 0);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 97, CPyStatic_globals);
        goto CPyL57;
    }
    CPy_DECREF(cpy_r_r87);
    CPy_Raise(cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(!0)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 97, CPyStatic_globals);
        goto CPyL51;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r94 = NULL;
    return cpy_r_r94;
CPyL52: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL51;
CPyL53: ;
    CPyTagged_DecRef(cpy_r_r53);
    goto CPyL51;
CPyL54: ;
    CPy_DecRef(cpy_r_r57);
    goto CPyL51;
CPyL55: ;
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r73);
    goto CPyL51;
CPyL56: ;
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r78);
    goto CPyL51;
CPyL57: ;
    CPy_DecRef(cpy_r_r87);
    goto CPyL51;
}

PyObject *CPyPy_to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"val", 0};
    static CPyArg_Parser parser = {"O:to_bytes", kwlist, 0};
    PyObject *obj_val;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_val)) {
        return NULL;
    }
    PyObject *arg_val;
    if (PyBool_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL4;
    arg_val = obj_val;
    if (arg_val != NULL) goto __LL4;
    if (PyBytes_Check(obj_val) || PyByteArray_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL4;
    if (PyLong_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL4;
    if (PyUnicode_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL4;
    CPy_TypeError("union[bool, object, bytes, int, str]", obj_val); 
    goto fail;
__LL4: ;
    PyObject *retval = CPyDef_to_bytes(arg_val);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict\\_utils.py", "to_bytes", 50, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_hexstr_to_bytes(PyObject *cpy_r_hexstr) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_non_prefixed_hex;
    int64_t cpy_r_r6;
    char cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_padded_hex;
    PyObject *cpy_r_r13;
    tuple_T3OOO cpy_r_r14;
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
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject **cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    cpy_r_r0 = CPyStatics[3]; /* '0x' */
    cpy_r_r1 = CPyStr_Startswith(cpy_r_hexstr, cpy_r_r0);
    if (cpy_r_r1) goto CPyL2;
    cpy_r_r2 = CPyStatics[4]; /* '0X' */
    cpy_r_r3 = CPyStr_Startswith(cpy_r_hexstr, cpy_r_r2);
    if (!cpy_r_r3) goto CPyL5;
CPyL2: ;
    cpy_r_r4 = CPyStr_GetSlice(cpy_r_hexstr, 4, 9223372036854775806LL);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "hexstr_to_bytes", 122, CPyStatic_globals);
        goto CPyL31;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "hexstr_to_bytes", 122, CPyStatic_globals, "str", cpy_r_r4);
        goto CPyL31;
    }
    cpy_r_non_prefixed_hex = cpy_r_r5;
    goto CPyL6;
CPyL5: ;
    CPy_INCREF(cpy_r_hexstr);
    cpy_r_non_prefixed_hex = cpy_r_hexstr;
CPyL6: ;
    cpy_r_r6 = CPyStr_Size_size_t(cpy_r_hexstr);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "hexstr_to_bytes", 127, CPyStatic_globals);
        goto CPyL32;
    }
    cpy_r_r8 = cpy_r_r6 << 1;
    cpy_r_r9 = CPyTagged_Remainder(cpy_r_r8, 4);
    if (unlikely(cpy_r_r9 == CPY_INT_TAG)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "hexstr_to_bytes", 127, CPyStatic_globals);
        goto CPyL32;
    }
    cpy_r_r10 = cpy_r_r9 != 0;
    CPyTagged_DECREF(cpy_r_r9);
    if (!cpy_r_r10) goto CPyL11;
    cpy_r_r11 = CPyStatics[22]; /* '0' */
    cpy_r_r12 = PyUnicode_Concat(cpy_r_r11, cpy_r_non_prefixed_hex);
    CPy_DECREF(cpy_r_non_prefixed_hex);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "hexstr_to_bytes", 128, CPyStatic_globals);
        goto CPyL31;
    }
    cpy_r_padded_hex = cpy_r_r12;
    goto CPyL12;
CPyL11: ;
    cpy_r_padded_hex = cpy_r_non_prefixed_hex;
CPyL12: ;
    cpy_r_r13 = PyUnicode_AsASCIIString(cpy_r_padded_hex);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "hexstr_to_bytes", 133, CPyStatic_globals);
        goto CPyL14;
    } else
        goto CPyL33;
CPyL13: ;
    goto CPyL25;
CPyL14: ;
    cpy_r_r14 = CPy_CatchError();
    cpy_r_r15 = CPyModule_builtins;
    cpy_r_r16 = CPyStatics[23]; /* 'UnicodeDecodeError' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "hexstr_to_bytes", 134, CPyStatic_globals);
        goto CPyL34;
    }
    cpy_r_r18 = CPy_ExceptionMatches(cpy_r_r17);
    CPy_DecRef(cpy_r_r17);
    if (!cpy_r_r18) goto CPyL35;
    cpy_r_r19 = CPyStatics[24]; /* 'hex string ' */
    cpy_r_r20 = CPyStatics[25]; /* ' may only contain [0-9a-fA-F] characters' */
    cpy_r_r21 = CPyStr_Build(3, cpy_r_r19, cpy_r_padded_hex, cpy_r_r20);
    CPy_DecRef(cpy_r_padded_hex);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "hexstr_to_bytes", 135, CPyStatic_globals);
        goto CPyL23;
    }
    cpy_r_r22 = CPyModule_builtins;
    cpy_r_r23 = CPyStatics[9]; /* 'ValueError' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "hexstr_to_bytes", 135, CPyStatic_globals);
        goto CPyL36;
    }
    PyObject *cpy_r_r25[1] = {cpy_r_r21};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = _PyObject_Vectorcall(cpy_r_r24, cpy_r_r26, 1, 0);
    CPy_DecRef(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "hexstr_to_bytes", 135, CPyStatic_globals);
        goto CPyL36;
    }
    CPy_DecRef(cpy_r_r21);
    CPy_Raise(cpy_r_r27);
    CPy_DecRef(cpy_r_r27);
    if (unlikely(!0)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "hexstr_to_bytes", 135, CPyStatic_globals);
        goto CPyL23;
    } else
        goto CPyL37;
CPyL20: ;
    CPy_Unreachable();
CPyL21: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL23;
    } else
        goto CPyL38;
CPyL22: ;
    CPy_Unreachable();
CPyL23: ;
    CPy_RestoreExcInfo(cpy_r_r14);
    CPy_DecRef(cpy_r_r14.f0);
    CPy_DecRef(cpy_r_r14.f1);
    CPy_DecRef(cpy_r_r14.f2);
    cpy_r_r28 = CPy_KeepPropagating();
    if (!cpy_r_r28) goto CPyL31;
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r29 = CPyStatic_unhexlify;
    if (unlikely(cpy_r_r29 == NULL)) {
        goto CPyL39;
    } else
        goto CPyL28;
CPyL26: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"unhexlify\" was not set");
    cpy_r_r30 = 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "hexstr_to_bytes", 137, CPyStatic_globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL28: ;
    PyObject *cpy_r_r31[1] = {cpy_r_r13};
    cpy_r_r32 = (PyObject **)&cpy_r_r31;
    cpy_r_r33 = _PyObject_Vectorcall(cpy_r_r29, cpy_r_r32, 1, 0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "hexstr_to_bytes", 137, CPyStatic_globals);
        goto CPyL40;
    }
    CPy_DECREF(cpy_r_r13);
    if (likely(PyBytes_Check(cpy_r_r33) || PyByteArray_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\_utils.py", "hexstr_to_bytes", 137, CPyStatic_globals, "bytes", cpy_r_r33);
        goto CPyL31;
    }
    return cpy_r_r34;
CPyL31: ;
    cpy_r_r35 = NULL;
    return cpy_r_r35;
CPyL32: ;
    CPy_DecRef(cpy_r_non_prefixed_hex);
    goto CPyL31;
CPyL33: ;
    CPy_DECREF(cpy_r_padded_hex);
    goto CPyL13;
CPyL34: ;
    CPy_DecRef(cpy_r_padded_hex);
    goto CPyL23;
CPyL35: ;
    CPy_DecRef(cpy_r_padded_hex);
    goto CPyL21;
CPyL36: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL23;
CPyL37: ;
    CPy_DecRef(cpy_r_r14.f0);
    CPy_DecRef(cpy_r_r14.f1);
    CPy_DecRef(cpy_r_r14.f2);
    goto CPyL20;
CPyL38: ;
    CPy_DecRef(cpy_r_r14.f0);
    CPy_DecRef(cpy_r_r14.f1);
    CPy_DecRef(cpy_r_r14.f2);
    goto CPyL22;
CPyL39: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL26;
CPyL40: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL31;
}

PyObject *CPyPy_hexstr_to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"hexstr", 0};
    static CPyArg_Parser parser = {"O:hexstr_to_bytes", kwlist, 0};
    PyObject *obj_hexstr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_hexstr)) {
        return NULL;
    }
    PyObject *arg_hexstr;
    if (likely(PyUnicode_Check(obj_hexstr)))
        arg_hexstr = obj_hexstr;
    else {
        CPy_TypeError("str", obj_hexstr); 
        goto fail;
    }
    PyObject *retval = CPyDef_hexstr_to_bytes(arg_hexstr);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict\\_utils.py", "hexstr_to_bytes", 100, CPyStatic_globals);
    return NULL;
}

char CPyDef___top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    void *cpy_r_r7;
    void *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r19;
    void *cpy_r_r21;
    void *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
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
    tuple_T3OOO cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
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
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    tuple_T3OOO cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
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
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    int32_t cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[26]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", -1, CPyStatic_globals);
        goto CPyL32;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_binascii;
    PyObject **cpy_r_r6[1] = {cpy_r_r5};
    cpy_r_r7 = (void *)&cpy_r_r6;
    int64_t cpy_r_r8[1] = {7};
    cpy_r_r9 = (void *)&cpy_r_r8;
    cpy_r_r10 = CPyStatics[51]; /* (('binascii', 'binascii', 'binascii'),) */
    cpy_r_r11 = CPyStatic_globals;
    cpy_r_r12 = CPyStatics[28]; /* 'checksum_dict\\_utils.py' */
    cpy_r_r13 = CPyStatics[29]; /* '<module>' */
    cpy_r_r14 = CPyImport_ImportMany(cpy_r_r10, cpy_r_r7, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r9);
    if (!cpy_r_r14) goto CPyL32;
    cpy_r_r15 = CPyStatics[52]; /* ('TYPE_CHECKING', 'Final', 'Union') */
    cpy_r_r16 = CPyStatics[33]; /* 'typing' */
    cpy_r_r17 = CPyStatic_globals;
    cpy_r_r18 = CPyImport_ImportFromMany(cpy_r_r16, cpy_r_r15, cpy_r_r15, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 8, CPyStatic_globals);
        goto CPyL32;
    }
    CPyModule_typing = cpy_r_r18;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r19 = (PyObject **)&CPyModule_cchecksum;
    PyObject **cpy_r_r20[1] = {cpy_r_r19};
    cpy_r_r21 = (void *)&cpy_r_r20;
    int64_t cpy_r_r22[1] = {10};
    cpy_r_r23 = (void *)&cpy_r_r22;
    cpy_r_r24 = CPyStatics[54]; /* (('cchecksum', 'cchecksum', 'cchecksum'),) */
    cpy_r_r25 = CPyStatic_globals;
    cpy_r_r26 = CPyStatics[28]; /* 'checksum_dict\\_utils.py' */
    cpy_r_r27 = CPyStatics[29]; /* '<module>' */
    cpy_r_r28 = CPyImport_ImportMany(cpy_r_r24, cpy_r_r21, cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r23);
    if (!cpy_r_r28) goto CPyL32;
    cpy_r_r29 = CPyStatics[55]; /* ('Address', 'ChecksumAddress', 'HexAddress', 'HexStr') */
    cpy_r_r30 = CPyStatics[39]; /* 'eth_typing' */
    cpy_r_r31 = CPyStatic_globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 11, CPyStatic_globals);
        goto CPyL32;
    }
    CPyModule_eth_typing = cpy_r_r32;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[56]; /* ('_hexbytes',) */
    cpy_r_r34 = CPyStatics[41]; /* 'checksum_dict' */
    cpy_r_r35 = CPyStatic_globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 13, CPyStatic_globals);
        goto CPyL32;
    }
    CPyModule_checksum_dict = cpy_r_r36;
    CPy_INCREF(CPyModule_checksum_dict);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatic_globals;
    cpy_r_r38 = CPyStatics[32]; /* 'Union' */
    cpy_r_r39 = CPyDict_GetItem(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 16, CPyStatic_globals);
        goto CPyL32;
    }
    cpy_r_r40 = CPyStatic_globals;
    cpy_r_r41 = CPyStatics[35]; /* 'Address' */
    cpy_r_r42 = CPyDict_GetItem(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 16, CPyStatic_globals);
        goto CPyL33;
    }
    cpy_r_r43 = CPyStatic_globals;
    cpy_r_r44 = CPyStatics[37]; /* 'HexAddress' */
    cpy_r_r45 = CPyDict_GetItem(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 16, CPyStatic_globals);
        goto CPyL34;
    }
    cpy_r_r46 = CPyStatic_globals;
    cpy_r_r47 = CPyStatics[36]; /* 'ChecksumAddress' */
    cpy_r_r48 = CPyDict_GetItem(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 16, CPyStatic_globals);
        goto CPyL35;
    }
    cpy_r_r49.f0 = cpy_r_r42;
    cpy_r_r49.f1 = cpy_r_r45;
    cpy_r_r49.f2 = cpy_r_r48;
    cpy_r_r50 = PyTuple_New(3);
    if (unlikely(cpy_r_r50 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5 = cpy_r_r49.f0;
    PyTuple_SET_ITEM(cpy_r_r50, 0, __tmp5);
    PyObject *__tmp6 = cpy_r_r49.f1;
    PyTuple_SET_ITEM(cpy_r_r50, 1, __tmp6);
    PyObject *__tmp7 = cpy_r_r49.f2;
    PyTuple_SET_ITEM(cpy_r_r50, 2, __tmp7);
    cpy_r_r51 = PyObject_GetItem(cpy_r_r39, cpy_r_r50);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 16, CPyStatic_globals);
        goto CPyL32;
    }
    cpy_r_r52 = CPyStatic_globals;
    cpy_r_r53 = CPyStatics[42]; /* 'AnyAddressOrContract' */
    cpy_r_r54 = CPyDict_SetItem(cpy_r_r52, cpy_r_r53, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 16, CPyStatic_globals);
        goto CPyL32;
    }
    if (!0) goto CPyL23;
    cpy_r_r56 = CPyStatic_globals;
    cpy_r_r57 = CPyStatics[32]; /* 'Union' */
    cpy_r_r58 = CPyDict_GetItem(cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 23, CPyStatic_globals);
        goto CPyL32;
    }
    cpy_r_r59 = CPyStatic_globals;
    cpy_r_r60 = CPyStatics[42]; /* 'AnyAddressOrContract' */
    cpy_r_r61 = CPyDict_GetItem(cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 23, CPyStatic_globals);
        goto CPyL36;
    }
    cpy_r_r62 = CPyStatic_globals;
    cpy_r_r63 = CPyStatics[43]; /* 'brownie' */
    cpy_r_r64 = CPyDict_GetItem(cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 23, CPyStatic_globals);
        goto CPyL37;
    }
    cpy_r_r65 = CPyStatics[44]; /* 'Contract' */
    cpy_r_r66 = CPyObject_GetAttr(cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 23, CPyStatic_globals);
        goto CPyL37;
    }
    cpy_r_r67 = CPyStatic_globals;
    cpy_r_r68 = CPyStatics[45]; /* 'y' */
    cpy_r_r69 = CPyDict_GetItem(cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 23, CPyStatic_globals);
        goto CPyL38;
    }
    cpy_r_r70 = CPyStatics[44]; /* 'Contract' */
    cpy_r_r71 = CPyObject_GetAttr(cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 23, CPyStatic_globals);
        goto CPyL38;
    }
    cpy_r_r72.f0 = cpy_r_r61;
    cpy_r_r72.f1 = cpy_r_r66;
    cpy_r_r72.f2 = cpy_r_r71;
    cpy_r_r73 = PyTuple_New(3);
    if (unlikely(cpy_r_r73 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8 = cpy_r_r72.f0;
    PyTuple_SET_ITEM(cpy_r_r73, 0, __tmp8);
    PyObject *__tmp9 = cpy_r_r72.f1;
    PyTuple_SET_ITEM(cpy_r_r73, 1, __tmp9);
    PyObject *__tmp10 = cpy_r_r72.f2;
    PyTuple_SET_ITEM(cpy_r_r73, 2, __tmp10);
    cpy_r_r74 = PyObject_GetItem(cpy_r_r58, cpy_r_r73);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 23, CPyStatic_globals);
        goto CPyL32;
    }
    cpy_r_r75 = CPyStatic_globals;
    cpy_r_r76 = CPyStatics[42]; /* 'AnyAddressOrContract' */
    cpy_r_r77 = CPyDict_SetItem(cpy_r_r75, cpy_r_r76, cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 23, CPyStatic_globals);
        goto CPyL32;
    }
CPyL23: ;
    cpy_r_r79 = CPyStatic_globals;
    cpy_r_r80 = CPyStatics[40]; /* '_hexbytes' */
    cpy_r_r81 = CPyDict_GetItem(cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 26, CPyStatic_globals);
        goto CPyL32;
    }
    cpy_r_r82 = CPyStatics[8]; /* 'HexBytes' */
    cpy_r_r83 = CPyObject_GetAttr(cpy_r_r81, cpy_r_r82);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 26, CPyStatic_globals);
        goto CPyL32;
    }
    CPyStatic_HexBytes = cpy_r_r83;
    CPy_INCREF(CPyStatic_HexBytes);
    cpy_r_r84 = CPyStatic_globals;
    cpy_r_r85 = CPyStatics[8]; /* 'HexBytes' */
    cpy_r_r86 = CPyDict_SetItem(cpy_r_r84, cpy_r_r85, cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 26, CPyStatic_globals);
        goto CPyL32;
    }
    cpy_r_r88 = CPyStatic_globals;
    cpy_r_r89 = CPyStatics[34]; /* 'cchecksum' */
    cpy_r_r90 = CPyDict_GetItem(cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 28, CPyStatic_globals);
        goto CPyL32;
    }
    cpy_r_r91 = CPyStatics[46]; /* 'to_checksum_address' */
    cpy_r_r92 = CPyObject_GetAttr(cpy_r_r90, cpy_r_r91);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 28, CPyStatic_globals);
        goto CPyL32;
    }
    CPyStatic_to_checksum_address = cpy_r_r92;
    CPy_INCREF(CPyStatic_to_checksum_address);
    cpy_r_r93 = CPyStatic_globals;
    cpy_r_r94 = CPyStatics[46]; /* 'to_checksum_address' */
    cpy_r_r95 = CPyDict_SetItem(cpy_r_r93, cpy_r_r94, cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 28, CPyStatic_globals);
        goto CPyL32;
    }
    cpy_r_r97 = CPyModule_binascii;
    cpy_r_r98 = CPyStatics[47]; /* 'unhexlify' */
    cpy_r_r99 = CPyObject_GetAttr(cpy_r_r97, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 29, CPyStatic_globals);
        goto CPyL32;
    }
    CPyStatic_unhexlify = cpy_r_r99;
    CPy_INCREF(CPyStatic_unhexlify);
    cpy_r_r100 = CPyStatic_globals;
    cpy_r_r101 = CPyStatics[47]; /* 'unhexlify' */
    cpy_r_r102 = CPyDict_SetItem(cpy_r_r100, cpy_r_r101, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r103 = cpy_r_r102 >= 0;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("checksum_dict\\_utils.py", "<module>", 29, CPyStatic_globals);
        goto CPyL32;
    }
    return 1;
CPyL32: ;
    cpy_r_r104 = 2;
    return cpy_r_r104;
CPyL33: ;
    CPy_DecRef(cpy_r_r39);
    goto CPyL32;
CPyL34: ;
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r42);
    goto CPyL32;
CPyL35: ;
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r45);
    goto CPyL32;
CPyL36: ;
    CPy_DecRef(cpy_r_r58);
    goto CPyL32;
CPyL37: ;
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r61);
    goto CPyL32;
CPyL38: ;
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r66);
    goto CPyL32;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_checksum_dict____utils = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_binascii = Py_None;
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

PyObject *CPyStatics[57];
const char * const CPyLit_Str[] = {
    "\b\0020x\0020X\nstartswith\003hex\b__name__\bHexBytes\nValueError\001\'",
    "\002\034\' is not a valid ETH address\tbytearray",
    "\005 Cannot convert negative integer \t to bytes\000\017Cannot convert \a{!r:{}}",
    "\a\006format\t of type \005{:{}}\tTypeError\0010\022UnicodeDecodeError\vhex string ",
    "\003( may only contain [0-9a-fA-F] characters\bbuiltins\bbinascii",
    "\006\027checksum_dict\\_utils.py\b<module>\rTYPE_CHECKING\005Final\005Union\006typing",
    "\006\tcchecksum\aAddress\017ChecksumAddress\nHexAddress\006HexStr\neth_typing",
    "\006\t_hexbytes\rchecksum_dict\024AnyAddressOrContract\abrownie\bContract\001y",
    "\002\023to_checksum_address\tunhexlify",
    "",
};
const char * const CPyLit_Bytes[] = {
    "\002\001\001\001\000",
    "",
};
const char * const CPyLit_Int[] = {
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    7, 3, 27, 27, 27, 1, 50, 3, 30, 31, 32, 3, 34, 34, 34, 1, 53, 4, 35,
    36, 37, 38, 1, 40
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_checksum_dict____utils_internal = NULL;
CPyModule *CPyModule_checksum_dict____utils;
PyObject *CPyStatic_globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_binascii;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_cchecksum;
CPyModule *CPyModule_eth_typing;
CPyModule *CPyModule_checksum_dict;
PyObject *CPyStatic_HexBytes = NULL;
PyObject *CPyStatic_to_checksum_address = NULL;
PyObject *CPyStatic_unhexlify = NULL;
PyObject *CPyDef_checksum_value(PyObject *cpy_r_value);
PyObject *CPyPy_checksum_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_to_bytes(PyObject *cpy_r_val);
PyObject *CPyPy_to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_hexstr_to_bytes(PyObject *cpy_r_hexstr);
PyObject *CPyPy_hexstr_to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef___top_level__(void);

static struct export_table_checksum_dict____utils exports = {
    &CPyStatic_HexBytes,
    &CPyStatic_to_checksum_address,
    &CPyStatic_unhexlify,
    &CPyDef_checksum_value,
    &CPyDef_to_bytes,
    &CPyDef_hexstr_to_bytes,
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
