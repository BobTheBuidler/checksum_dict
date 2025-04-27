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
#include "__native_default.h"
#include "__native_internal_default.h"

static int
DefaultChecksumDict_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return CPyPy_DefaultChecksumDict_____init__(self, args, kwds) != NULL ? 0 : -1;
}

static PyGetSetDef DefaultChecksumDict_getseters[] = {
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef DefaultChecksumDict_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_DefaultChecksumDict_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_getitem_nochecksum",
     (PyCFunction)CPyPy_DefaultChecksumDict____getitem_nochecksum,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_DefaultChecksumDict_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "DefaultChecksumDict",
    .tp_getset = DefaultChecksumDict_getseters,
    .tp_methods = DefaultChecksumDict_methods,
    .tp_init = DefaultChecksumDict_init,
    .tp_basicsize = sizeof(PyDictObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_MANAGED_DICT,
};
static PyTypeObject *CPyType_DefaultChecksumDict_template = &CPyType_DefaultChecksumDict_template_;

static PyMethodDef module_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "checksum_dict.default",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    module_methods
};

PyObject *CPyInit_checksum_dict___default(void)
{
    PyObject* modname = NULL;
    if (CPyModule_checksum_dict___default_internal) {
        Py_INCREF(CPyModule_checksum_dict___default_internal);
        return CPyModule_checksum_dict___default_internal;
    }
    CPyModule_checksum_dict___default_internal = PyModule_Create(&module);
    if (unlikely(CPyModule_checksum_dict___default_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_checksum_dict___default_internal, "__name__");
    CPyStatic_globals = PyModule_GetDict(CPyModule_checksum_dict___default_internal);
    if (unlikely(CPyStatic_globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef___top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_checksum_dict___default_internal;
    fail:
    Py_CLEAR(CPyModule_checksum_dict___default_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_DefaultChecksumDict);
    return NULL;
}

char CPyDef_DefaultChecksumDict_____init__(PyObject *cpy_r_self, PyObject *cpy_r_default, PyObject *cpy_r_seed) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    tuple_T4CIOO cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_key;
    PyObject *cpy_r_value;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    if (cpy_r_seed != NULL) goto CPyL33;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_seed = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[3]; /* 'super' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "__init__", 44, CPyStatic_globals);
        goto CPyL34;
    }
    cpy_r_r4 = (PyObject *)CPyType_DefaultChecksumDict;
    PyObject *cpy_r_r5[2] = {cpy_r_r4, cpy_r_self};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r6, 2, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "__init__", 44, CPyStatic_globals);
        goto CPyL34;
    }
    cpy_r_r8 = CPyStatics[4]; /* '__init__' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "__init__", 44, CPyStatic_globals);
        goto CPyL34;
    }
    PyObject *cpy_r_r10[1] = {cpy_r_default};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = _PyObject_Vectorcall(cpy_r_r9, cpy_r_r11, 1, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "__init__", 44, CPyStatic_globals);
        goto CPyL34;
    } else
        goto CPyL35;
CPyL6: ;
    cpy_r_r13 = (PyObject *)&PyDict_Type;
    cpy_r_r14 = PyObject_IsInstance(cpy_r_seed, cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("checksum_dict\\default.py", "__init__", 45, CPyStatic_globals);
        goto CPyL34;
    }
    cpy_r_r16 = cpy_r_r14;
    if (!cpy_r_r16) goto CPyL14;
    if (likely(PyDict_Check(cpy_r_seed)))
        cpy_r_r17 = cpy_r_seed;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\default.py", "__init__", 46, CPyStatic_globals, "dict", cpy_r_seed);
        goto CPyL32;
    }
    cpy_r_r18 = 0;
    cpy_r_r19 = PyDict_Size(cpy_r_r17);
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = CPyDict_GetItemsIter(cpy_r_r17);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "__init__", 46, CPyStatic_globals);
        goto CPyL36;
    }
CPyL10: ;
    cpy_r_r22 = CPyDict_NextItem(cpy_r_r21, cpy_r_r18);
    cpy_r_r23 = cpy_r_r22.f1;
    cpy_r_r18 = cpy_r_r23;
    cpy_r_r24 = cpy_r_r22.f0;
    if (!cpy_r_r24) goto CPyL37;
    cpy_r_r25 = cpy_r_r22.f2;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = cpy_r_r22.f3;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r22.f2);
    CPy_DECREF(cpy_r_r22.f3);
    cpy_r_key = cpy_r_r25;
    cpy_r_value = cpy_r_r26;
    cpy_r_r27 = CPyDict_SetItem(cpy_r_self, cpy_r_key, cpy_r_value);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_value);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("checksum_dict\\default.py", "__init__", 47, CPyStatic_globals);
        goto CPyL38;
    }
    cpy_r_r29 = CPyDict_CheckSize(cpy_r_r17, cpy_r_r20);
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("checksum_dict\\default.py", "__init__", 46, CPyStatic_globals);
        goto CPyL38;
    } else
        goto CPyL10;
CPyL13: ;
    cpy_r_r30 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("checksum_dict\\default.py", "__init__", 46, CPyStatic_globals);
        goto CPyL32;
    } else
        goto CPyL31;
CPyL14: ;
    cpy_r_r31 = CPyStatic_globals;
    cpy_r_r32 = CPyStatics[5]; /* 'Iterable' */
    cpy_r_r33 = CPyDict_GetItem(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "__init__", 48, CPyStatic_globals);
        goto CPyL34;
    }
    cpy_r_r34 = PyObject_IsInstance(cpy_r_seed, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("checksum_dict\\default.py", "__init__", 48, CPyStatic_globals);
        goto CPyL34;
    }
    cpy_r_r36 = cpy_r_r34;
    if (!cpy_r_r36) goto CPyL39;
    cpy_r_r37 = PyObject_GetIter(cpy_r_seed);
    CPy_DECREF(cpy_r_seed);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "__init__", 49, CPyStatic_globals);
        goto CPyL32;
    }
CPyL18: ;
    cpy_r_r38 = PyIter_Next(cpy_r_r37);
    if (cpy_r_r38 == NULL) goto CPyL40;
    cpy_r_r39 = PyObject_GetIter(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "__init__", 49, CPyStatic_globals);
        goto CPyL41;
    }
    cpy_r_r40 = PyIter_Next(cpy_r_r39);
    if (cpy_r_r40 == NULL) {
        goto CPyL42;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("checksum_dict\\default.py", "__init__", 49, CPyStatic_globals);
        goto CPyL32;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_key = cpy_r_r40;
    cpy_r_r42 = PyIter_Next(cpy_r_r39);
    if (cpy_r_r42 == NULL) {
        goto CPyL43;
    } else
        goto CPyL26;
CPyL24: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r43 = 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("checksum_dict\\default.py", "__init__", 49, CPyStatic_globals);
        goto CPyL32;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_value = cpy_r_r42;
    cpy_r_r44 = PyIter_Next(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (cpy_r_r44 == NULL) {
        goto CPyL29;
    } else
        goto CPyL44;
CPyL27: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r45 = 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("checksum_dict\\default.py", "__init__", 49, CPyStatic_globals);
        goto CPyL32;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r46 = CPyDict_SetItem(cpy_r_self, cpy_r_key, cpy_r_value);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_value);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("checksum_dict\\default.py", "__init__", 50, CPyStatic_globals);
        goto CPyL41;
    } else
        goto CPyL18;
CPyL30: ;
    cpy_r_r48 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("checksum_dict\\default.py", "__init__", 49, CPyStatic_globals);
        goto CPyL32;
    }
CPyL31: ;
    return 1;
CPyL32: ;
    cpy_r_r49 = 2;
    return cpy_r_r49;
CPyL33: ;
    CPy_INCREF(cpy_r_seed);
    goto CPyL2;
CPyL34: ;
    CPy_DecRef(cpy_r_seed);
    goto CPyL32;
CPyL35: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL6;
CPyL36: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL32;
CPyL37: ;
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r22.f2);
    CPy_DECREF(cpy_r_r22.f3);
    goto CPyL13;
CPyL38: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r21);
    goto CPyL32;
CPyL39: ;
    CPy_DECREF(cpy_r_seed);
    goto CPyL31;
CPyL40: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL30;
CPyL41: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL32;
CPyL42: ;
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r39);
    goto CPyL21;
CPyL43: ;
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r39);
    goto CPyL24;
CPyL44: ;
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r44);
    goto CPyL27;
}

PyObject *CPyPy_DefaultChecksumDict_____init__(PyObject *self, PyObject *args, PyObject *kw) {
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
        goto __LL1;
    }
    if (PyDict_Check(obj_seed))
        arg_seed = obj_seed;
    else {
        arg_seed = NULL;
    }
    if (arg_seed != NULL) goto __LL1;
    arg_seed = obj_seed;
    if (arg_seed != NULL) goto __LL1;
    if (obj_seed == Py_None)
        arg_seed = obj_seed;
    else {
        arg_seed = NULL;
    }
    if (arg_seed != NULL) goto __LL1;
    CPy_TypeError("union[dict, object, None]", obj_seed); 
    goto fail;
__LL1: ;
    char retval = CPyDef_DefaultChecksumDict_____init__(arg_self, arg_default, arg_seed);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("checksum_dict\\default.py", "__init__", 43, CPyStatic_globals);
    return NULL;
}

char CPyDef_DefaultChecksumDict_____init___3__DefaultChecksumDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_default, PyObject *cpy_r_seed) {
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
    cpy_r_r0 = CPyStatics[4]; /* '__init__' */
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
    CPy_DECREF(cpy_r_r2);
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
    CPy_DECREF(cpy_r_r2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL10;
CPyL14: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    goto CPyL10;
}

PyObject *CPyPy_DefaultChecksumDict_____init___3__DefaultChecksumDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"default", "seed", 0};
    static CPyArg_Parser parser = {"O|O:__init____DefaultChecksumDict_glue", kwlist, 0};
    PyObject *obj_default;
    PyObject *obj_seed = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_default, &obj_seed)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_DefaultChecksumDict)))
        arg_self = obj_self;
    else {
        CPy_TypeError("checksum_dict.default.DefaultChecksumDict", obj_self); 
        goto fail;
    }
    PyObject *arg_default = obj_default;
    PyObject *arg_seed;
    if (obj_seed == NULL) {
        arg_seed = NULL;
        goto __LL2;
    }
    if (PyDict_Check(obj_seed))
        arg_seed = obj_seed;
    else {
        arg_seed = NULL;
    }
    if (arg_seed != NULL) goto __LL2;
    arg_seed = obj_seed;
    if (arg_seed != NULL) goto __LL2;
    if (obj_seed == Py_None)
        arg_seed = obj_seed;
    else {
        arg_seed = NULL;
    }
    if (arg_seed != NULL) goto __LL2;
    CPy_TypeError("union[dict, object, None]", obj_seed); 
    goto fail;
__LL2: ;
    char retval = CPyDef_DefaultChecksumDict_____init___3__DefaultChecksumDict_glue(arg_self, arg_default, arg_seed);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("checksum_dict\\default.py", "__init____DefaultChecksumDict_glue", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_DefaultChecksumDict____getitem_nochecksum(PyObject *cpy_r_self, PyObject *cpy_r_key) {
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
        CPy_AddTraceback("checksum_dict\\default.py", "_getitem_nochecksum", 70, CPyStatic_globals);
        goto CPyL7;
    }
    cpy_r_r2 = cpy_r_r0;
    if (!cpy_r_r2) goto CPyL4;
    cpy_r_r3 = CPyDict_GetItem(cpy_r_self, cpy_r_key);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "_getitem_nochecksum", 71, CPyStatic_globals);
        goto CPyL7;
    }
    return cpy_r_r3;
CPyL4: ;
    cpy_r_r4 = CPyStatics[6]; /* 'default_factory' */
    PyObject *cpy_r_r5[1] = {cpy_r_self};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "_getitem_nochecksum", 72, CPyStatic_globals);
        goto CPyL7;
    }
    cpy_r_r8 = CPyStatics[7]; /* '_setitem_nochecksum' */
    PyObject *cpy_r_r9[3] = {cpy_r_self, cpy_r_key, cpy_r_r7};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = PyObject_VectorcallMethod(cpy_r_r8, cpy_r_r10, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "_getitem_nochecksum", 73, CPyStatic_globals);
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

PyObject *CPyPy_DefaultChecksumDict____getitem_nochecksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *arg_key = obj_key;
    PyObject *retval = CPyDef_DefaultChecksumDict____getitem_nochecksum(arg_self, arg_key);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict\\default.py", "_getitem_nochecksum", 52, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_DefaultChecksumDict____getitem_nochecksum__DefaultChecksumDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[8]; /* '_getitem_nochecksum' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_key};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_DefaultChecksumDict____getitem_nochecksum__DefaultChecksumDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", 0};
    static CPyArg_Parser parser = {"O:_getitem_nochecksum__DefaultChecksumDict_glue", kwlist, 0};
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_key)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_DefaultChecksumDict)))
        arg_self = obj_self;
    else {
        CPy_TypeError("checksum_dict.default.DefaultChecksumDict", obj_self); 
        goto fail;
    }
    PyObject *arg_key = obj_key;
    PyObject *retval = CPyDef_DefaultChecksumDict____getitem_nochecksum__DefaultChecksumDict_glue(arg_self, arg_key);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict\\default.py", "_getitem_nochecksum__DefaultChecksumDict_glue", -1, CPyStatic_globals);
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
    tuple_T2OO cpy_r_r30;
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
    int32_t cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[9]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "<module>", -1, CPyStatic_globals);
        goto CPyL20;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[26]; /* ('Callable', 'DefaultDict', 'Iterable', 'Optional') */
    cpy_r_r6 = CPyStatics[13]; /* 'typing' */
    cpy_r_r7 = CPyStatic_globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "<module>", 1, CPyStatic_globals);
        goto CPyL20;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[27]; /* ('ChecksumAddress',) */
    cpy_r_r10 = CPyStatics[15]; /* 'eth_typing' */
    cpy_r_r11 = CPyStatic_globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "<module>", 3, CPyStatic_globals);
        goto CPyL20;
    }
    CPyModule_eth_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[28]; /* ('mypyc_attr',) */
    cpy_r_r14 = CPyStatics[17]; /* 'mypy_extensions' */
    cpy_r_r15 = CPyStatic_globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "<module>", 4, CPyStatic_globals);
        goto CPyL20;
    }
    CPyModule_mypy_extensions = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy_extensions);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[29]; /* ('ChecksumAddressDict', 'T', '_SeedT') */
    cpy_r_r18 = CPyStatics[21]; /* 'checksum_dict.base' */
    cpy_r_r19 = CPyStatic_globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "<module>", 6, CPyStatic_globals);
        goto CPyL20;
    }
    CPyModule_checksum_dict___base = cpy_r_r20;
    CPy_INCREF(CPyModule_checksum_dict___base);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatic_globals;
    cpy_r_r22 = CPyStatics[11]; /* 'DefaultDict' */
    cpy_r_r23 = CPyDict_GetItem(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "<module>", 10, CPyStatic_globals);
        goto CPyL20;
    }
    cpy_r_r24 = CPyStatic_globals;
    cpy_r_r25 = CPyStatics[14]; /* 'ChecksumAddress' */
    cpy_r_r26 = CPyDict_GetItem(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "<module>", 10, CPyStatic_globals);
        goto CPyL21;
    }
    cpy_r_r27 = CPyStatic_globals;
    cpy_r_r28 = CPyStatics[19]; /* 'T' */
    cpy_r_r29 = CPyDict_GetItem(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "<module>", 10, CPyStatic_globals);
        goto CPyL22;
    }
    cpy_r_r30.f0 = cpy_r_r26;
    cpy_r_r30.f1 = cpy_r_r29;
    cpy_r_r31 = PyTuple_New(2);
    if (unlikely(cpy_r_r31 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3 = cpy_r_r30.f0;
    PyTuple_SET_ITEM(cpy_r_r31, 0, __tmp3);
    PyObject *__tmp4 = cpy_r_r30.f1;
    PyTuple_SET_ITEM(cpy_r_r31, 1, __tmp4);
    cpy_r_r32 = PyObject_GetItem(cpy_r_r23, cpy_r_r31);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "<module>", 10, CPyStatic_globals);
        goto CPyL20;
    }
    cpy_r_r33 = CPyStatic_globals;
    cpy_r_r34 = CPyStatics[18]; /* 'ChecksumAddressDict' */
    cpy_r_r35 = CPyDict_GetItem(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "<module>", 10, CPyStatic_globals);
        goto CPyL23;
    }
    cpy_r_r36 = CPyStatic_globals;
    cpy_r_r37 = CPyStatics[19]; /* 'T' */
    cpy_r_r38 = CPyDict_GetItem(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "<module>", 10, CPyStatic_globals);
        goto CPyL24;
    }
    cpy_r_r39 = PyObject_GetItem(cpy_r_r35, cpy_r_r38);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "<module>", 10, CPyStatic_globals);
        goto CPyL23;
    }
    cpy_r_r40 = PyTuple_Pack(2, cpy_r_r32, cpy_r_r39);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "<module>", 10, CPyStatic_globals);
        goto CPyL20;
    }
    cpy_r_r41 = CPyStatics[22]; /* 'checksum_dict.default' */
    cpy_r_r42 = (PyObject *)CPyType_DefaultChecksumDict_template;
    cpy_r_r43 = CPyType_FromTemplate(cpy_r_r42, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "<module>", 10, CPyStatic_globals);
        goto CPyL20;
    }
    cpy_r_r44 = CPyStatics[23]; /* '__mypyc_attrs__' */
    cpy_r_r45 = CPyStatics[24]; /* '__dict__' */
    cpy_r_r46 = PyTuple_Pack(1, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("checksum_dict\\default.py", "<module>", 10, CPyStatic_globals);
        goto CPyL25;
    }
    cpy_r_r47 = PyObject_SetAttr(cpy_r_r43, cpy_r_r44, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("checksum_dict\\default.py", "<module>", 10, CPyStatic_globals);
        goto CPyL25;
    }
    CPyType_DefaultChecksumDict = (PyTypeObject *)cpy_r_r43;
    CPy_INCREF(CPyType_DefaultChecksumDict);
    cpy_r_r49 = CPyStatic_globals;
    cpy_r_r50 = CPyStatics[25]; /* 'DefaultChecksumDict' */
    cpy_r_r51 = CPyDict_SetItem(cpy_r_r49, cpy_r_r50, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("checksum_dict\\default.py", "<module>", 10, CPyStatic_globals);
        goto CPyL20;
    }
    return 1;
CPyL20: ;
    cpy_r_r53 = 2;
    return cpy_r_r53;
CPyL21: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL20;
CPyL22: ;
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r26);
    goto CPyL20;
CPyL23: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL20;
CPyL24: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r35);
    goto CPyL20;
CPyL25: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL20;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_checksum_dict___default = Py_None;
    CPyModule_builtins = Py_None;
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

PyObject *CPyStatics[30];
const char * const CPyLit_Str[] = {
    "\005\005super\b__init__\bIterable\017default_factory\023_setitem_nochecksum",
    "\006\023_getitem_nochecksum\bbuiltins\bCallable\vDefaultDict\bOptional\006typing",
    "\004\017ChecksumAddress\neth_typing\nmypyc_attr\017mypy_extensions",
    "\005\023ChecksumAddressDict\001T\006_SeedT\022checksum_dict.base\025checksum_dict.default",
    "\003\017__mypyc_attrs__\b__dict__\023DefaultChecksumDict",
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
const int CPyLit_Tuple[] = {4, 4, 10, 11, 5, 12, 1, 14, 1, 16, 3, 18, 19, 20};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_checksum_dict___default_internal = NULL;
CPyModule *CPyModule_checksum_dict___default;
PyObject *CPyStatic_globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_eth_typing;
CPyModule *CPyModule_mypy_extensions;
CPyModule *CPyModule_checksum_dict___base;
PyTypeObject *CPyType_DefaultChecksumDict;
char CPyDef_DefaultChecksumDict_____init__(PyObject *cpy_r_self, PyObject *cpy_r_default, PyObject *cpy_r_seed);
PyObject *CPyPy_DefaultChecksumDict_____init__(PyObject *self, PyObject *args, PyObject *kw);
char CPyDef_DefaultChecksumDict_____init___3__DefaultChecksumDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_default, PyObject *cpy_r_seed);
PyObject *CPyPy_DefaultChecksumDict_____init___3__DefaultChecksumDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_DefaultChecksumDict____getitem_nochecksum(PyObject *cpy_r_self, PyObject *cpy_r_key);
PyObject *CPyPy_DefaultChecksumDict____getitem_nochecksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_DefaultChecksumDict____getitem_nochecksum__DefaultChecksumDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key);
PyObject *CPyPy_DefaultChecksumDict____getitem_nochecksum__DefaultChecksumDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef___top_level__(void);

static struct export_table_checksum_dict___default exports = {
    &CPyType_DefaultChecksumDict,
    &CPyDef_DefaultChecksumDict_____init__,
    &CPyDef_DefaultChecksumDict_____init___3__DefaultChecksumDict_glue,
    &CPyDef_DefaultChecksumDict____getitem_nochecksum,
    &CPyDef_DefaultChecksumDict____getitem_nochecksum__DefaultChecksumDict_glue,
    &CPyDef___top_level__,
};

PyMODINIT_FUNC PyInit_default__mypyc(void)
{
    static PyModuleDef def = { PyModuleDef_HEAD_INIT, "checksum_dict.default__mypyc", NULL, -1, NULL, NULL };
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
    
    capsule = PyCapsule_New(&exports, "checksum_dict.default__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_checksum_dict___default(void);
    capsule = PyCapsule_New((void *)CPyInit_checksum_dict___default, "checksum_dict.default__mypyc.init_checksum_dict___default", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_checksum_dict___default", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return module;
    fail:
    Py_XDECREF(module);
    return NULL;
}
