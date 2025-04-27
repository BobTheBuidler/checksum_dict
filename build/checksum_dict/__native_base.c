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
#include "__native_base.h"
#include "__native_internal_base.h"

static int
ChecksumAddressDict_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return CPyPy_ChecksumAddressDict_____init__(self, args, kwds) != NULL ? 0 : -1;
}
static PyObject *CPyDunder___getitem__ChecksumAddressDict(PyObject *obj_self, PyObject *obj_key) {
    PyObject *arg_self;
    if (likely(PyDict_Check(obj_self)))
        arg_self = obj_self;
    else {
        CPy_TypeError("dict", obj_self); 
        return NULL;
    }
    PyObject *arg_key = obj_key;
    return CPyDef_ChecksumAddressDict_____getitem__(arg_self, arg_key);
}
static int CPyDunder___setitem__ChecksumAddressDict(PyObject *obj_self, PyObject *obj_key, PyObject *obj_value) {
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
    PyObject *arg_key = obj_key;
    PyObject *arg_value = obj_value;
    char val = CPyDef_ChecksumAddressDict_____setitem__(arg_self, arg_key, arg_value);
    if (val == 2) {
        goto fail;
    }
    return 0;
fail: ;
    return -1;
}
static PyMappingMethods ChecksumAddressDict_as_mapping = {
    .mp_subscript = CPyDunder___getitem__ChecksumAddressDict,
    .mp_ass_subscript = CPyDunder___setitem__ChecksumAddressDict,
};

static PyGetSetDef ChecksumAddressDict_getseters[] = {
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef ChecksumAddressDict_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_ChecksumAddressDict_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy_ChecksumAddressDict_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__getitem__",
     (PyCFunction)CPyPy_ChecksumAddressDict_____getitem__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setitem__",
     (PyCFunction)CPyPy_ChecksumAddressDict_____setitem__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_getitem_nochecksum",
     (PyCFunction)CPyPy_ChecksumAddressDict____getitem_nochecksum,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_setitem_nochecksum",
     (PyCFunction)CPyPy_ChecksumAddressDict____setitem_nochecksum,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_ChecksumAddressDict_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ChecksumAddressDict",
    .tp_getset = ChecksumAddressDict_getseters,
    .tp_methods = ChecksumAddressDict_methods,
    .tp_init = ChecksumAddressDict_init,
    .tp_repr = CPyDef_ChecksumAddressDict_____repr__,
    .tp_as_mapping = &ChecksumAddressDict_as_mapping,
    .tp_basicsize = sizeof(PyDictObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_MANAGED_DICT,
};
static PyTypeObject *CPyType_ChecksumAddressDict_template = &CPyType_ChecksumAddressDict_template_;

static PyMethodDef module_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "checksum_dict.base",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    module_methods
};

PyObject *CPyInit_checksum_dict___base(void)
{
    PyObject* modname = NULL;
    if (CPyModule_checksum_dict___base_internal) {
        Py_INCREF(CPyModule_checksum_dict___base_internal);
        return CPyModule_checksum_dict___base_internal;
    }
    CPyModule_checksum_dict___base_internal = PyModule_Create(&module);
    if (unlikely(CPyModule_checksum_dict___base_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_checksum_dict___base_internal, "__name__");
    CPyStatic_globals = PyModule_GetDict(CPyModule_checksum_dict___base_internal);
    if (unlikely(CPyStatic_globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef___top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_checksum_dict___base_internal;
    fail:
    Py_CLEAR(CPyModule_checksum_dict___base_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_ChecksumAddressDict);
    return NULL;
}

char CPyDef_ChecksumAddressDict_____init__(PyObject *cpy_r_self, PyObject *cpy_r_seed) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T4CIOO cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_key;
    PyObject *cpy_r_value;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    if (cpy_r_seed != NULL) goto CPyL29;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_seed = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = (PyObject *)&PyDict_Type;
    cpy_r_r2 = PyObject_IsInstance(cpy_r_seed, cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__init__", 63, CPyStatic_globals);
        goto CPyL30;
    }
    cpy_r_r4 = cpy_r_r2;
    if (!cpy_r_r4) goto CPyL10;
    if (likely(PyDict_Check(cpy_r_seed)))
        cpy_r_r5 = cpy_r_seed;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\base.py", "__init__", 64, CPyStatic_globals, "dict", cpy_r_seed);
        goto CPyL28;
    }
    cpy_r_r6 = 0;
    cpy_r_r7 = PyDict_Size(cpy_r_r5);
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = CPyDict_GetItemsIter(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__init__", 64, CPyStatic_globals);
        goto CPyL31;
    }
CPyL6: ;
    cpy_r_r10 = CPyDict_NextItem(cpy_r_r9, cpy_r_r6);
    cpy_r_r11 = cpy_r_r10.f1;
    cpy_r_r6 = cpy_r_r11;
    cpy_r_r12 = cpy_r_r10.f0;
    if (!cpy_r_r12) goto CPyL32;
    cpy_r_r13 = cpy_r_r10.f2;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = cpy_r_r10.f3;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r10.f2);
    CPy_DECREF(cpy_r_r10.f3);
    cpy_r_key = cpy_r_r13;
    cpy_r_value = cpy_r_r14;
    cpy_r_r15 = CPyDict_SetItem(cpy_r_self, cpy_r_key, cpy_r_value);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_value);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__init__", 65, CPyStatic_globals);
        goto CPyL33;
    }
    cpy_r_r17 = CPyDict_CheckSize(cpy_r_r5, cpy_r_r8);
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__init__", 64, CPyStatic_globals);
        goto CPyL33;
    } else
        goto CPyL6;
CPyL9: ;
    cpy_r_r18 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__init__", 64, CPyStatic_globals);
        goto CPyL28;
    } else
        goto CPyL27;
CPyL10: ;
    cpy_r_r19 = CPyStatic_globals;
    cpy_r_r20 = CPyStatics[3]; /* 'Iterable' */
    cpy_r_r21 = CPyDict_GetItem(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__init__", 66, CPyStatic_globals);
        goto CPyL30;
    }
    cpy_r_r22 = PyObject_IsInstance(cpy_r_seed, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__init__", 66, CPyStatic_globals);
        goto CPyL30;
    }
    cpy_r_r24 = cpy_r_r22;
    if (!cpy_r_r24) goto CPyL34;
    cpy_r_r25 = PyObject_GetIter(cpy_r_seed);
    CPy_DECREF(cpy_r_seed);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__init__", 67, CPyStatic_globals);
        goto CPyL28;
    }
CPyL14: ;
    cpy_r_r26 = PyIter_Next(cpy_r_r25);
    if (cpy_r_r26 == NULL) goto CPyL35;
    cpy_r_r27 = PyObject_GetIter(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__init__", 67, CPyStatic_globals);
        goto CPyL36;
    }
    cpy_r_r28 = PyIter_Next(cpy_r_r27);
    if (cpy_r_r28 == NULL) {
        goto CPyL37;
    } else
        goto CPyL19;
CPyL17: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r29 = 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__init__", 67, CPyStatic_globals);
        goto CPyL28;
    }
    CPy_Unreachable();
CPyL19: ;
    cpy_r_key = cpy_r_r28;
    cpy_r_r30 = PyIter_Next(cpy_r_r27);
    if (cpy_r_r30 == NULL) {
        goto CPyL38;
    } else
        goto CPyL22;
CPyL20: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r31 = 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__init__", 67, CPyStatic_globals);
        goto CPyL28;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_value = cpy_r_r30;
    cpy_r_r32 = PyIter_Next(cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (cpy_r_r32 == NULL) {
        goto CPyL25;
    } else
        goto CPyL39;
CPyL23: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r33 = 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__init__", 67, CPyStatic_globals);
        goto CPyL28;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r34 = CPyDict_SetItem(cpy_r_self, cpy_r_key, cpy_r_value);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_value);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__init__", 68, CPyStatic_globals);
        goto CPyL36;
    } else
        goto CPyL14;
CPyL26: ;
    cpy_r_r36 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__init__", 67, CPyStatic_globals);
        goto CPyL28;
    }
CPyL27: ;
    return 1;
CPyL28: ;
    cpy_r_r37 = 2;
    return cpy_r_r37;
CPyL29: ;
    CPy_INCREF(cpy_r_seed);
    goto CPyL2;
CPyL30: ;
    CPy_DecRef(cpy_r_seed);
    goto CPyL28;
CPyL31: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL28;
CPyL32: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10.f2);
    CPy_DECREF(cpy_r_r10.f3);
    goto CPyL9;
CPyL33: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    goto CPyL28;
CPyL34: ;
    CPy_DECREF(cpy_r_seed);
    goto CPyL27;
CPyL35: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL26;
CPyL36: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL28;
CPyL37: ;
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r27);
    goto CPyL17;
CPyL38: ;
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r27);
    goto CPyL20;
CPyL39: ;
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r32);
    goto CPyL23;
}

PyObject *CPyPy_ChecksumAddressDict_____init__(PyObject *self, PyObject *args, PyObject *kw) {
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
    char retval = CPyDef_ChecksumAddressDict_____init__(arg_self, arg_seed);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("checksum_dict\\base.py", "__init__", 62, CPyStatic_globals);
    return NULL;
}

char CPyDef_ChecksumAddressDict_____init___3__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_seed) {
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
    cpy_r_r0 = CPyStatics[4]; /* '__init__' */
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
    CPy_DECREF(cpy_r_r2);
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
    CPy_DECREF(cpy_r_r2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    goto CPyL10;
CPyL14: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    goto CPyL10;
}

PyObject *CPyPy_ChecksumAddressDict_____init___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"seed", 0};
    static CPyArg_Parser parser = {"|O:__init____ChecksumAddressDict_glue", kwlist, 0};
    PyObject *obj_seed = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_seed)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_ChecksumAddressDict)))
        arg_self = obj_self;
    else {
        CPy_TypeError("checksum_dict.base.ChecksumAddressDict", obj_self); 
        goto fail;
    }
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
    char retval = CPyDef_ChecksumAddressDict_____init___3__ChecksumAddressDict_glue(arg_self, arg_seed);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("checksum_dict\\base.py", "__init____ChecksumAddressDict_glue", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_ChecksumAddressDict_____repr__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[5]; /* 'ChecksumAddressDict(' */
    cpy_r_r1 = PyDict_Copy(cpy_r_self);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__repr__", 71, CPyStatic_globals);
        goto CPyL4;
    }
    cpy_r_r2 = PyObject_Str(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__repr__", 71, CPyStatic_globals);
        goto CPyL4;
    }
    cpy_r_r3 = CPyStatics[6]; /* ')' */
    cpy_r_r4 = CPyStr_Build(3, cpy_r_r0, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__repr__", 71, CPyStatic_globals);
        goto CPyL4;
    }
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_ChecksumAddressDict_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_ChecksumAddressDict_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict\\base.py", "__repr__", 70, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_ChecksumAddressDict_____repr___3__ChecksumAddressDict_glue(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[7]; /* '__repr__' */
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

PyObject *CPyPy_ChecksumAddressDict_____repr___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr____ChecksumAddressDict_glue", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_ChecksumAddressDict)))
        arg_self = obj_self;
    else {
        CPy_TypeError("checksum_dict.base.ChecksumAddressDict", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_ChecksumAddressDict_____repr___3__ChecksumAddressDict_glue(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict\\base.py", "__repr____ChecksumAddressDict_glue", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_ChecksumAddressDict_____getitem__(PyObject *cpy_r_self, PyObject *cpy_r_key) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    tuple_T3OOO cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    tuple_T3OOO cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
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
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[8]; /* 'super' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 77, CPyStatic_globals);
        goto CPyL6;
    }
    cpy_r_r3 = (PyObject *)CPyType_ChecksumAddressDict;
    PyObject *cpy_r_r4[2] = {cpy_r_r3, cpy_r_self};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r2, cpy_r_r5, 2, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 77, CPyStatic_globals);
        goto CPyL6;
    }
    cpy_r_r7 = CPyStatics[9]; /* '__getitem__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 77, CPyStatic_globals);
        goto CPyL6;
    }
    PyObject *cpy_r_r9[1] = {cpy_r_key};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 77, CPyStatic_globals);
        goto CPyL6;
    }
    return cpy_r_r11;
CPyL6: ;
    cpy_r_r12 = CPy_CatchError();
    cpy_r_r13 = CPyModule_builtins;
    cpy_r_r14 = CPyStatics[10]; /* 'KeyError' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 78, CPyStatic_globals);
        goto CPyL11;
    }
    cpy_r_r16 = CPy_ExceptionMatches(cpy_r_r15);
    CPy_DecRef(cpy_r_r15);
    if (cpy_r_r16) goto CPyL10;
    CPy_Reraise();
    if (!0) {
        goto CPyL11;
    } else
        goto CPyL38;
CPyL9: ;
    CPy_Unreachable();
CPyL10: ;
    CPy_RestoreExcInfo(cpy_r_r12);
    CPy_DecRef(cpy_r_r12.f0);
    CPy_DecRef(cpy_r_r12.f1);
    CPy_DecRef(cpy_r_r12.f2);
    goto CPyL13;
CPyL11: ;
    CPy_RestoreExcInfo(cpy_r_r12);
    CPy_DecRef(cpy_r_r12.f0);
    CPy_DecRef(cpy_r_r12.f1);
    CPy_DecRef(cpy_r_r12.f2);
    cpy_r_r17 = CPy_KeepPropagating();
    if (!cpy_r_r17) goto CPyL37;
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r18 = CPyModule_builtins;
    cpy_r_r19 = CPyStatics[8]; /* 'super' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 83, CPyStatic_globals);
        goto CPyL20;
    }
    cpy_r_r21 = (PyObject *)CPyType_ChecksumAddressDict;
    PyObject *cpy_r_r22[2] = {cpy_r_r21, cpy_r_self};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = _PyObject_Vectorcall(cpy_r_r20, cpy_r_r23, 2, 0);
    CPy_DecRef(cpy_r_r20);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 83, CPyStatic_globals);
        goto CPyL20;
    }
    cpy_r_r25 = CPyStatics[9]; /* '__getitem__' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    CPy_DecRef(cpy_r_r24);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 83, CPyStatic_globals);
        goto CPyL20;
    }
    cpy_r_r27 = CPyStatic_globals;
    cpy_r_r28 = CPyStatics[11]; /* 'attempt_checksum' */
    cpy_r_r29 = CPyDict_GetItem(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 83, CPyStatic_globals);
        goto CPyL39;
    }
    PyObject *cpy_r_r30[1] = {cpy_r_key};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = _PyObject_Vectorcall(cpy_r_r29, cpy_r_r31, 1, 0);
    CPy_DecRef(cpy_r_r29);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 83, CPyStatic_globals);
        goto CPyL39;
    }
    PyObject *cpy_r_r33[1] = {cpy_r_r32};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = _PyObject_Vectorcall(cpy_r_r26, cpy_r_r34, 1, 0);
    CPy_DecRef(cpy_r_r26);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 83, CPyStatic_globals);
        goto CPyL40;
    }
    CPy_DecRef(cpy_r_r32);
    return cpy_r_r35;
CPyL20: ;
    cpy_r_r36 = CPy_CatchError();
    cpy_r_r37 = CPyModule_builtins;
    cpy_r_r38 = CPyStatics[10]; /* 'KeyError' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 84, CPyStatic_globals);
        goto CPyL35;
    }
    cpy_r_r40 = CPy_ExceptionMatches(cpy_r_r39);
    CPy_DecRef(cpy_r_r39);
    if (!cpy_r_r40) goto CPyL33;
    cpy_r_r41 = CPy_GetExcValue();
    cpy_r_r42 = CPyStatics[12]; /* 'args' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    CPy_DecRef(cpy_r_r41);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 85, CPyStatic_globals);
        goto CPyL35;
    }
    if (likely(PyTuple_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("checksum_dict\\base.py", "__getitem__", 85, CPyStatic_globals, "tuple", cpy_r_r43);
        goto CPyL35;
    }
    cpy_r_r45 = CPyStatic_globals;
    cpy_r_r46 = CPyStatics[13]; /* 'exceptions' */
    cpy_r_r47 = CPyDict_GetItem(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 85, CPyStatic_globals);
        goto CPyL41;
    }
    cpy_r_r48 = CPyStatics[10]; /* 'KeyError' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_r47, cpy_r_r48);
    CPy_DecRef(cpy_r_r47);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 85, CPyStatic_globals);
        goto CPyL41;
    }
    cpy_r_r50 = PyList_New(0);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 85, CPyStatic_globals);
        goto CPyL42;
    }
    cpy_r_r51 = CPyList_Extend(cpy_r_r50, cpy_r_r44);
    CPy_DecRef(cpy_r_r44);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 85, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL44;
CPyL28: ;
    cpy_r_r52 = PyList_AsTuple(cpy_r_r50);
    CPy_DecRef(cpy_r_r50);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 85, CPyStatic_globals);
        goto CPyL45;
    }
    cpy_r_r53 = PyDict_New();
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 85, CPyStatic_globals);
        goto CPyL46;
    }
    cpy_r_r54 = PyObject_Call(cpy_r_r49, cpy_r_r52, cpy_r_r53);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 85, CPyStatic_globals);
        goto CPyL35;
    }
    CPy_Raise(cpy_r_r54);
    CPy_DecRef(cpy_r_r54);
    if (unlikely(!0)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 85, CPyStatic_globals);
        goto CPyL35;
    } else
        goto CPyL47;
CPyL32: ;
    CPy_Unreachable();
CPyL33: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL35;
    } else
        goto CPyL48;
CPyL34: ;
    CPy_Unreachable();
CPyL35: ;
    CPy_RestoreExcInfo(cpy_r_r36);
    CPy_DecRef(cpy_r_r36.f0);
    CPy_DecRef(cpy_r_r36.f1);
    CPy_DecRef(cpy_r_r36.f2);
    cpy_r_r55 = CPy_KeepPropagating();
    if (!cpy_r_r55) goto CPyL37;
    CPy_Unreachable();
CPyL37: ;
    cpy_r_r56 = NULL;
    return cpy_r_r56;
CPyL38: ;
    CPy_DecRef(cpy_r_r12.f0);
    CPy_DecRef(cpy_r_r12.f1);
    CPy_DecRef(cpy_r_r12.f2);
    goto CPyL9;
CPyL39: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL20;
CPyL40: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL20;
CPyL41: ;
    CPy_DecRef(cpy_r_r44);
    goto CPyL35;
CPyL42: ;
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r49);
    goto CPyL35;
CPyL43: ;
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r50);
    goto CPyL35;
CPyL44: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL28;
CPyL45: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL35;
CPyL46: ;
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r52);
    goto CPyL35;
CPyL47: ;
    CPy_DecRef(cpy_r_r36.f0);
    CPy_DecRef(cpy_r_r36.f1);
    CPy_DecRef(cpy_r_r36.f2);
    goto CPyL32;
CPyL48: ;
    CPy_DecRef(cpy_r_r36.f0);
    CPy_DecRef(cpy_r_r36.f1);
    CPy_DecRef(cpy_r_r36.f2);
    goto CPyL34;
}

PyObject *CPyPy_ChecksumAddressDict_____getitem__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *arg_key = obj_key;
    PyObject *retval = CPyDef_ChecksumAddressDict_____getitem__(arg_self, arg_key);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict\\base.py", "__getitem__", 73, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_ChecksumAddressDict_____getitem___3__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[9]; /* '__getitem__' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_key};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_ChecksumAddressDict_____getitem___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", 0};
    static CPyArg_Parser parser = {"O:__getitem____ChecksumAddressDict_glue", kwlist, 0};
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_key)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_ChecksumAddressDict)))
        arg_self = obj_self;
    else {
        CPy_TypeError("checksum_dict.base.ChecksumAddressDict", obj_self); 
        goto fail;
    }
    PyObject *arg_key = obj_key;
    PyObject *retval = CPyDef_ChecksumAddressDict_____getitem___3__ChecksumAddressDict_glue(arg_self, arg_key);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict\\base.py", "__getitem____ChecksumAddressDict_glue", -1, CPyStatic_globals);
    return NULL;
}

char CPyDef_ChecksumAddressDict_____setitem__(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value) {
    int32_t cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
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
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    cpy_r_r0 = PyDict_Contains(cpy_r_self, cpy_r_key);
    cpy_r_r1 = cpy_r_r0 >= 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__setitem__", 88, CPyStatic_globals);
        goto CPyL14;
    }
    cpy_r_r2 = cpy_r_r0;
    if (!cpy_r_r2) goto CPyL6;
    cpy_r_r3 = CPyModule_builtins;
    cpy_r_r4 = CPyStatics[8]; /* 'super' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__setitem__", 90, CPyStatic_globals);
        goto CPyL14;
    }
    cpy_r_r6 = (PyObject *)CPyType_ChecksumAddressDict;
    PyObject *cpy_r_r7[2] = {cpy_r_r6, cpy_r_self};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r5, cpy_r_r8, 2, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__setitem__", 90, CPyStatic_globals);
        goto CPyL14;
    }
    cpy_r_r10 = CPyStatics[14]; /* '__setitem__' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__setitem__", 90, CPyStatic_globals);
        goto CPyL14;
    }
    PyObject *cpy_r_r12[2] = {cpy_r_key, cpy_r_value};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r13, 2, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__setitem__", 90, CPyStatic_globals);
        goto CPyL14;
    } else
        goto CPyL15;
CPyL6: ;
    cpy_r_r15 = CPyModule_builtins;
    cpy_r_r16 = CPyStatics[8]; /* 'super' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__setitem__", 92, CPyStatic_globals);
        goto CPyL14;
    }
    cpy_r_r18 = (PyObject *)CPyType_ChecksumAddressDict;
    PyObject *cpy_r_r19[2] = {cpy_r_r18, cpy_r_self};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = _PyObject_Vectorcall(cpy_r_r17, cpy_r_r20, 2, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__setitem__", 92, CPyStatic_globals);
        goto CPyL14;
    }
    cpy_r_r22 = CPyStatics[14]; /* '__setitem__' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__setitem__", 92, CPyStatic_globals);
        goto CPyL14;
    }
    cpy_r_r24 = CPyStatic_globals;
    cpy_r_r25 = CPyStatics[11]; /* 'attempt_checksum' */
    cpy_r_r26 = CPyDict_GetItem(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__setitem__", 92, CPyStatic_globals);
        goto CPyL16;
    }
    PyObject *cpy_r_r27[1] = {cpy_r_key};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r26, cpy_r_r28, 1, 0);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__setitem__", 92, CPyStatic_globals);
        goto CPyL16;
    }
    PyObject *cpy_r_r30[2] = {cpy_r_r29, cpy_r_value};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r31, 2, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "__setitem__", 92, CPyStatic_globals);
        goto CPyL17;
    } else
        goto CPyL18;
CPyL12: ;
    CPy_DECREF(cpy_r_r29);
CPyL13: ;
    return 1;
CPyL14: ;
    cpy_r_r33 = 2;
    return cpy_r_r33;
CPyL15: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL14;
CPyL17: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL14;
CPyL18: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL12;
}

PyObject *CPyPy_ChecksumAddressDict_____setitem__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *arg_key = obj_key;
    PyObject *arg_value = obj_value;
    char retval = CPyDef_ChecksumAddressDict_____setitem__(arg_self, arg_key, arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("checksum_dict\\base.py", "__setitem__", 87, CPyStatic_globals);
    return NULL;
}

char CPyDef_ChecksumAddressDict_____setitem___3__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[14]; /* '__setitem__' */
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

PyObject *CPyPy_ChecksumAddressDict_____setitem___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", "value", 0};
    static CPyArg_Parser parser = {"OO:__setitem____ChecksumAddressDict_glue", kwlist, 0};
    PyObject *obj_key;
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_key, &obj_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_ChecksumAddressDict)))
        arg_self = obj_self;
    else {
        CPy_TypeError("checksum_dict.base.ChecksumAddressDict", obj_self); 
        goto fail;
    }
    PyObject *arg_key = obj_key;
    PyObject *arg_value = obj_value;
    char retval = CPyDef_ChecksumAddressDict_____setitem___3__ChecksumAddressDict_glue(arg_self, arg_key, arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("checksum_dict\\base.py", "__setitem____ChecksumAddressDict_glue", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_ChecksumAddressDict____getitem_nochecksum(PyObject *cpy_r_self, PyObject *cpy_r_key) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[8]; /* 'super' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "_getitem_nochecksum", 112, CPyStatic_globals);
        goto CPyL5;
    }
    cpy_r_r3 = (PyObject *)CPyType_ChecksumAddressDict;
    PyObject *cpy_r_r4[2] = {cpy_r_r3, cpy_r_self};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r2, cpy_r_r5, 2, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "_getitem_nochecksum", 112, CPyStatic_globals);
        goto CPyL5;
    }
    cpy_r_r7 = CPyStatics[9]; /* '__getitem__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "_getitem_nochecksum", 112, CPyStatic_globals);
        goto CPyL5;
    }
    PyObject *cpy_r_r9[1] = {cpy_r_key};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "_getitem_nochecksum", 112, CPyStatic_globals);
        goto CPyL5;
    }
    return cpy_r_r11;
CPyL5: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
}

PyObject *CPyPy_ChecksumAddressDict____getitem_nochecksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_ChecksumAddressDict____getitem_nochecksum(arg_self, arg_key);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict\\base.py", "_getitem_nochecksum", 94, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_ChecksumAddressDict____getitem_nochecksum__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[15]; /* '_getitem_nochecksum' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_key};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_ChecksumAddressDict____getitem_nochecksum__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", 0};
    static CPyArg_Parser parser = {"O:_getitem_nochecksum__ChecksumAddressDict_glue", kwlist, 0};
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_key)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_ChecksumAddressDict)))
        arg_self = obj_self;
    else {
        CPy_TypeError("checksum_dict.base.ChecksumAddressDict", obj_self); 
        goto fail;
    }
    PyObject *arg_key = obj_key;
    PyObject *retval = CPyDef_ChecksumAddressDict____getitem_nochecksum__ChecksumAddressDict_glue(arg_self, arg_key);
    return retval;
fail: ;
    CPy_AddTraceback("checksum_dict\\base.py", "_getitem_nochecksum__ChecksumAddressDict_glue", -1, CPyStatic_globals);
    return NULL;
}

char CPyDef_ChecksumAddressDict____setitem_nochecksum(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    CPyTagged cpy_r_r8;
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
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = CPyStatics[16]; /* '0x' */
    cpy_r_r1 = CPyStatics[17]; /* 'startswith' */
    PyObject *cpy_r_r2[2] = {cpy_r_key, cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "_setitem_nochecksum", 136, CPyStatic_globals);
        goto CPyL16;
    }
    cpy_r_r5 = PyObject_IsTrue(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("checksum_dict\\base.py", "_setitem_nochecksum", 136, CPyStatic_globals);
        goto CPyL16;
    }
    cpy_r_r7 = cpy_r_r5;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPyObject_Size(cpy_r_key);
    if (unlikely(cpy_r_r8 == CPY_INT_TAG)) {
        CPy_AddTraceback("checksum_dict\\base.py", "_setitem_nochecksum", 136, CPyStatic_globals);
        goto CPyL16;
    }
    cpy_r_r9 = cpy_r_r8 != 84;
    CPyTagged_DECREF(cpy_r_r8);
    if (!cpy_r_r9) goto CPyL11;
CPyL5: ;
    cpy_r_r10 = CPyStatics[18]; /* "'" */
    cpy_r_r11 = PyObject_Str(cpy_r_key);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "_setitem_nochecksum", 137, CPyStatic_globals);
        goto CPyL16;
    }
    cpy_r_r12 = CPyStatics[19]; /* "' is not a valid ETH address" */
    cpy_r_r13 = CPyStr_Build(3, cpy_r_r10, cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "_setitem_nochecksum", 137, CPyStatic_globals);
        goto CPyL16;
    }
    cpy_r_r14 = CPyModule_builtins;
    cpy_r_r15 = CPyStatics[20]; /* 'ValueError' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "_setitem_nochecksum", 137, CPyStatic_globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r17[1] = {cpy_r_r13};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "_setitem_nochecksum", 137, CPyStatic_globals);
        goto CPyL17;
    }
    CPy_DECREF(cpy_r_r13);
    CPy_Raise(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(!0)) {
        CPy_AddTraceback("checksum_dict\\base.py", "_setitem_nochecksum", 137, CPyStatic_globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r20 = CPyModule_builtins;
    cpy_r_r21 = CPyStatics[8]; /* 'super' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "_setitem_nochecksum", 138, CPyStatic_globals);
        goto CPyL16;
    }
    cpy_r_r23 = (PyObject *)CPyType_ChecksumAddressDict;
    PyObject *cpy_r_r24[2] = {cpy_r_r23, cpy_r_self};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r22, cpy_r_r25, 2, 0);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "_setitem_nochecksum", 138, CPyStatic_globals);
        goto CPyL16;
    }
    cpy_r_r27 = CPyStatics[14]; /* '__setitem__' */
    cpy_r_r28 = CPyObject_GetAttr(cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "_setitem_nochecksum", 138, CPyStatic_globals);
        goto CPyL16;
    }
    PyObject *cpy_r_r29[2] = {cpy_r_key, cpy_r_value};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = _PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 2, 0);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "_setitem_nochecksum", 138, CPyStatic_globals);
        goto CPyL16;
    } else
        goto CPyL18;
CPyL15: ;
    return 1;
CPyL16: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
CPyL17: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL16;
CPyL18: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL15;
}

PyObject *CPyPy_ChecksumAddressDict____setitem_nochecksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *arg_key = obj_key;
    PyObject *arg_value = obj_value;
    char retval = CPyDef_ChecksumAddressDict____setitem_nochecksum(arg_self, arg_key, arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("checksum_dict\\base.py", "_setitem_nochecksum", 114, CPyStatic_globals);
    return NULL;
}

char CPyDef_ChecksumAddressDict____setitem_nochecksum__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[21]; /* '_setitem_nochecksum' */
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

PyObject *CPyPy_ChecksumAddressDict____setitem_nochecksum__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", "value", 0};
    static CPyArg_Parser parser = {"OO:_setitem_nochecksum__ChecksumAddressDict_glue", kwlist, 0};
    PyObject *obj_key;
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_key, &obj_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_ChecksumAddressDict)))
        arg_self = obj_self;
    else {
        CPy_TypeError("checksum_dict.base.ChecksumAddressDict", obj_self); 
        goto fail;
    }
    PyObject *arg_key = obj_key;
    PyObject *arg_value = obj_value;
    char retval = CPyDef_ChecksumAddressDict____setitem_nochecksum__ChecksumAddressDict_glue(arg_self, arg_key, arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("checksum_dict\\base.py", "_setitem_nochecksum__ChecksumAddressDict_glue", -1, CPyStatic_globals);
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
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
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
    tuple_T2OO cpy_r_r48;
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
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    tuple_T2OO cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    tuple_T2OO cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    tuple_T2OO cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[22]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", -1, CPyStatic_globals);
        goto CPyL34;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[43]; /* ('Dict', 'Iterable', 'Optional', 'Tuple', 'TypeVar',
                                  'Union', 'overload') */
    cpy_r_r6 = CPyStatics[29]; /* 'typing' */
    cpy_r_r7 = CPyStatic_globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 1, CPyStatic_globals);
        goto CPyL34;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[44]; /* ('ChecksumAddress',) */
    cpy_r_r10 = CPyStatics[31]; /* 'eth_typing' */
    cpy_r_r11 = CPyStatic_globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 3, CPyStatic_globals);
        goto CPyL34;
    }
    CPyModule_eth_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[45]; /* ('mypyc_attr',) */
    cpy_r_r14 = CPyStatics[33]; /* 'mypy_extensions' */
    cpy_r_r15 = CPyStatic_globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 4, CPyStatic_globals);
        goto CPyL34;
    }
    CPyModule_mypy_extensions = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy_extensions);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[46]; /* ('exceptions',) */
    cpy_r_r18 = CPyStatics[34]; /* 'checksum_dict' */
    cpy_r_r19 = CPyStatic_globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 6, CPyStatic_globals);
        goto CPyL34;
    }
    CPyModule_checksum_dict = cpy_r_r20;
    CPy_INCREF(CPyModule_checksum_dict);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[47]; /* ('AnyAddressOrContract', 'attempt_checksum') */
    cpy_r_r22 = CPyStatics[36]; /* 'checksum_dict._utils' */
    cpy_r_r23 = CPyStatic_globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 7, CPyStatic_globals);
        goto CPyL34;
    }
    CPyModule_checksum_dict____utils = cpy_r_r24;
    CPy_INCREF(CPyModule_checksum_dict____utils);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[37]; /* 'T' */
    cpy_r_r26 = CPyStatic_globals;
    cpy_r_r27 = CPyStatics[26]; /* 'TypeVar' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 10, CPyStatic_globals);
        goto CPyL34;
    }
    PyObject *cpy_r_r29[1] = {cpy_r_r25};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = _PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 10, CPyStatic_globals);
        goto CPyL34;
    }
    cpy_r_r32 = CPyStatic_globals;
    cpy_r_r33 = CPyStatics[37]; /* 'T' */
    cpy_r_r34 = CPyDict_SetItem(cpy_r_r32, cpy_r_r33, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 10, CPyStatic_globals);
        goto CPyL34;
    }
    cpy_r_r36 = CPyStatic_globals;
    cpy_r_r37 = CPyStatics[27]; /* 'Union' */
    cpy_r_r38 = CPyDict_GetItem(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 12, CPyStatic_globals);
        goto CPyL34;
    }
    cpy_r_r39 = CPyStatic_globals;
    cpy_r_r40 = CPyStatics[23]; /* 'Dict' */
    cpy_r_r41 = CPyDict_GetItem(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 12, CPyStatic_globals);
        goto CPyL35;
    }
    cpy_r_r42 = CPyStatic_globals;
    cpy_r_r43 = CPyStatics[35]; /* 'AnyAddressOrContract' */
    cpy_r_r44 = CPyDict_GetItem(cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 12, CPyStatic_globals);
        goto CPyL36;
    }
    cpy_r_r45 = CPyStatic_globals;
    cpy_r_r46 = CPyStatics[37]; /* 'T' */
    cpy_r_r47 = CPyDict_GetItem(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 12, CPyStatic_globals);
        goto CPyL37;
    }
    cpy_r_r48.f0 = cpy_r_r44;
    cpy_r_r48.f1 = cpy_r_r47;
    cpy_r_r49 = PyTuple_New(2);
    if (unlikely(cpy_r_r49 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3 = cpy_r_r48.f0;
    PyTuple_SET_ITEM(cpy_r_r49, 0, __tmp3);
    PyObject *__tmp4 = cpy_r_r48.f1;
    PyTuple_SET_ITEM(cpy_r_r49, 1, __tmp4);
    cpy_r_r50 = PyObject_GetItem(cpy_r_r41, cpy_r_r49);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 12, CPyStatic_globals);
        goto CPyL35;
    }
    cpy_r_r51 = CPyStatic_globals;
    cpy_r_r52 = CPyStatics[3]; /* 'Iterable' */
    cpy_r_r53 = CPyDict_GetItem(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 12, CPyStatic_globals);
        goto CPyL38;
    }
    cpy_r_r54 = CPyStatic_globals;
    cpy_r_r55 = CPyStatics[25]; /* 'Tuple' */
    cpy_r_r56 = CPyDict_GetItem(cpy_r_r54, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 12, CPyStatic_globals);
        goto CPyL39;
    }
    cpy_r_r57 = CPyStatic_globals;
    cpy_r_r58 = CPyStatics[35]; /* 'AnyAddressOrContract' */
    cpy_r_r59 = CPyDict_GetItem(cpy_r_r57, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 12, CPyStatic_globals);
        goto CPyL40;
    }
    cpy_r_r60 = CPyStatic_globals;
    cpy_r_r61 = CPyStatics[37]; /* 'T' */
    cpy_r_r62 = CPyDict_GetItem(cpy_r_r60, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 12, CPyStatic_globals);
        goto CPyL41;
    }
    cpy_r_r63.f0 = cpy_r_r59;
    cpy_r_r63.f1 = cpy_r_r62;
    cpy_r_r64 = PyTuple_New(2);
    if (unlikely(cpy_r_r64 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5 = cpy_r_r63.f0;
    PyTuple_SET_ITEM(cpy_r_r64, 0, __tmp5);
    PyObject *__tmp6 = cpy_r_r63.f1;
    PyTuple_SET_ITEM(cpy_r_r64, 1, __tmp6);
    cpy_r_r65 = PyObject_GetItem(cpy_r_r56, cpy_r_r64);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 12, CPyStatic_globals);
        goto CPyL39;
    }
    cpy_r_r66 = PyObject_GetItem(cpy_r_r53, cpy_r_r65);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 12, CPyStatic_globals);
        goto CPyL38;
    }
    cpy_r_r67.f0 = cpy_r_r50;
    cpy_r_r67.f1 = cpy_r_r66;
    cpy_r_r68 = PyTuple_New(2);
    if (unlikely(cpy_r_r68 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7 = cpy_r_r67.f0;
    PyTuple_SET_ITEM(cpy_r_r68, 0, __tmp7);
    PyObject *__tmp8 = cpy_r_r67.f1;
    PyTuple_SET_ITEM(cpy_r_r68, 1, __tmp8);
    cpy_r_r69 = PyObject_GetItem(cpy_r_r38, cpy_r_r68);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 12, CPyStatic_globals);
        goto CPyL34;
    }
    cpy_r_r70 = CPyStatic_globals;
    cpy_r_r71 = CPyStatics[38]; /* '_SeedT' */
    cpy_r_r72 = CPyDict_SetItem(cpy_r_r70, cpy_r_r71, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 12, CPyStatic_globals);
        goto CPyL34;
    }
    cpy_r_r74 = CPyStatic_globals;
    cpy_r_r75 = CPyStatics[23]; /* 'Dict' */
    cpy_r_r76 = CPyDict_GetItem(cpy_r_r74, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 16, CPyStatic_globals);
        goto CPyL34;
    }
    cpy_r_r77 = CPyStatic_globals;
    cpy_r_r78 = CPyStatics[30]; /* 'ChecksumAddress' */
    cpy_r_r79 = CPyDict_GetItem(cpy_r_r77, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 16, CPyStatic_globals);
        goto CPyL42;
    }
    cpy_r_r80 = CPyStatic_globals;
    cpy_r_r81 = CPyStatics[37]; /* 'T' */
    cpy_r_r82 = CPyDict_GetItem(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 16, CPyStatic_globals);
        goto CPyL43;
    }
    cpy_r_r83.f0 = cpy_r_r79;
    cpy_r_r83.f1 = cpy_r_r82;
    cpy_r_r84 = PyTuple_New(2);
    if (unlikely(cpy_r_r84 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9 = cpy_r_r83.f0;
    PyTuple_SET_ITEM(cpy_r_r84, 0, __tmp9);
    PyObject *__tmp10 = cpy_r_r83.f1;
    PyTuple_SET_ITEM(cpy_r_r84, 1, __tmp10);
    cpy_r_r85 = PyObject_GetItem(cpy_r_r76, cpy_r_r84);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 16, CPyStatic_globals);
        goto CPyL34;
    }
    cpy_r_r86 = PyTuple_Pack(1, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 16, CPyStatic_globals);
        goto CPyL34;
    }
    cpy_r_r87 = CPyStatics[39]; /* 'checksum_dict.base' */
    cpy_r_r88 = (PyObject *)CPyType_ChecksumAddressDict_template;
    cpy_r_r89 = CPyType_FromTemplate(cpy_r_r88, cpy_r_r86, cpy_r_r87);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 16, CPyStatic_globals);
        goto CPyL34;
    }
    cpy_r_r90 = CPyStatics[40]; /* '__mypyc_attrs__' */
    cpy_r_r91 = CPyStatics[41]; /* '__dict__' */
    cpy_r_r92 = PyTuple_Pack(1, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 16, CPyStatic_globals);
        goto CPyL44;
    }
    cpy_r_r93 = PyObject_SetAttr(cpy_r_r89, cpy_r_r90, cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 16, CPyStatic_globals);
        goto CPyL44;
    }
    CPyType_ChecksumAddressDict = (PyTypeObject *)cpy_r_r89;
    CPy_INCREF(CPyType_ChecksumAddressDict);
    cpy_r_r95 = CPyStatic_globals;
    cpy_r_r96 = CPyStatics[42]; /* 'ChecksumAddressDict' */
    cpy_r_r97 = CPyDict_SetItem(cpy_r_r95, cpy_r_r96, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("checksum_dict\\base.py", "<module>", 16, CPyStatic_globals);
        goto CPyL34;
    }
    return 1;
CPyL34: ;
    cpy_r_r99 = 2;
    return cpy_r_r99;
CPyL35: ;
    CPy_DecRef(cpy_r_r38);
    goto CPyL34;
CPyL36: ;
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r41);
    goto CPyL34;
CPyL37: ;
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r44);
    goto CPyL34;
CPyL38: ;
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r50);
    goto CPyL34;
CPyL39: ;
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r53);
    goto CPyL34;
CPyL40: ;
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r56);
    goto CPyL34;
CPyL41: ;
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r59);
    goto CPyL34;
CPyL42: ;
    CPy_DecRef(cpy_r_r76);
    goto CPyL34;
CPyL43: ;
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r79);
    goto CPyL34;
CPyL44: ;
    CPy_DecRef(cpy_r_r89);
    goto CPyL34;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_checksum_dict___base = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_mypy_extensions = Py_None;
    CPyModule_checksum_dict = Py_None;
    CPyModule_checksum_dict____utils = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[48];
const char * const CPyLit_Str[] = {
    "\a\bIterable\b__init__\024ChecksumAddressDict(\001)\b__repr__\005super\v__getitem__",
    "\005\bKeyError\020attempt_checksum\004args\nexceptions\v__setitem__",
    "\005\023_getitem_nochecksum\0020x\nstartswith\001\'\034\' is not a valid ETH address",
    "\a\nValueError\023_setitem_nochecksum\bbuiltins\004Dict\bOptional\005Tuple\aTypeVar",
    "\006\005Union\boverload\006typing\017ChecksumAddress\neth_typing\nmypyc_attr",
    "\003\017mypy_extensions\rchecksum_dict\024AnyAddressOrContract",
    "\005\024checksum_dict._utils\001T\006_SeedT\022checksum_dict.base\017__mypyc_attrs__",
    "\002\b__dict__\023ChecksumAddressDict",
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
const int CPyLit_Tuple[] = {5, 7, 23, 3, 24, 25, 26, 27, 28, 1, 30, 1, 32, 1, 13, 2, 35, 11};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_checksum_dict___base_internal = NULL;
CPyModule *CPyModule_checksum_dict___base;
PyObject *CPyStatic_globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_eth_typing;
CPyModule *CPyModule_mypy_extensions;
CPyModule *CPyModule_checksum_dict;
CPyModule *CPyModule_checksum_dict____utils;
PyTypeObject *CPyType_ChecksumAddressDict;
char CPyDef_ChecksumAddressDict_____init__(PyObject *cpy_r_self, PyObject *cpy_r_seed);
PyObject *CPyPy_ChecksumAddressDict_____init__(PyObject *self, PyObject *args, PyObject *kw);
char CPyDef_ChecksumAddressDict_____init___3__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_seed);
PyObject *CPyPy_ChecksumAddressDict_____init___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_ChecksumAddressDict_____repr__(PyObject *cpy_r_self);
PyObject *CPyPy_ChecksumAddressDict_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_ChecksumAddressDict_____repr___3__ChecksumAddressDict_glue(PyObject *cpy_r_self);
PyObject *CPyPy_ChecksumAddressDict_____repr___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_ChecksumAddressDict_____getitem__(PyObject *cpy_r_self, PyObject *cpy_r_key);
PyObject *CPyPy_ChecksumAddressDict_____getitem__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_ChecksumAddressDict_____getitem___3__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key);
PyObject *CPyPy_ChecksumAddressDict_____getitem___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_ChecksumAddressDict_____setitem__(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value);
PyObject *CPyPy_ChecksumAddressDict_____setitem__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_ChecksumAddressDict_____setitem___3__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value);
PyObject *CPyPy_ChecksumAddressDict_____setitem___3__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_ChecksumAddressDict____getitem_nochecksum(PyObject *cpy_r_self, PyObject *cpy_r_key);
PyObject *CPyPy_ChecksumAddressDict____getitem_nochecksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_ChecksumAddressDict____getitem_nochecksum__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key);
PyObject *CPyPy_ChecksumAddressDict____getitem_nochecksum__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_ChecksumAddressDict____setitem_nochecksum(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value);
PyObject *CPyPy_ChecksumAddressDict____setitem_nochecksum(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_ChecksumAddressDict____setitem_nochecksum__ChecksumAddressDict_glue(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value);
PyObject *CPyPy_ChecksumAddressDict____setitem_nochecksum__ChecksumAddressDict_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef___top_level__(void);

static struct export_table_checksum_dict___base exports = {
    &CPyType_ChecksumAddressDict,
    &CPyDef_ChecksumAddressDict_____init__,
    &CPyDef_ChecksumAddressDict_____init___3__ChecksumAddressDict_glue,
    &CPyDef_ChecksumAddressDict_____repr__,
    &CPyDef_ChecksumAddressDict_____repr___3__ChecksumAddressDict_glue,
    &CPyDef_ChecksumAddressDict_____getitem__,
    &CPyDef_ChecksumAddressDict_____getitem___3__ChecksumAddressDict_glue,
    &CPyDef_ChecksumAddressDict_____setitem__,
    &CPyDef_ChecksumAddressDict_____setitem___3__ChecksumAddressDict_glue,
    &CPyDef_ChecksumAddressDict____getitem_nochecksum,
    &CPyDef_ChecksumAddressDict____getitem_nochecksum__ChecksumAddressDict_glue,
    &CPyDef_ChecksumAddressDict____setitem_nochecksum,
    &CPyDef_ChecksumAddressDict____setitem_nochecksum__ChecksumAddressDict_glue,
    &CPyDef___top_level__,
};

PyMODINIT_FUNC PyInit_base__mypyc(void)
{
    static PyModuleDef def = { PyModuleDef_HEAD_INIT, "checksum_dict.base__mypyc", NULL, -1, NULL, NULL };
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
    
    capsule = PyCapsule_New(&exports, "checksum_dict.base__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_checksum_dict___base(void);
    capsule = PyCapsule_New((void *)CPyInit_checksum_dict___base, "checksum_dict.base__mypyc.init_checksum_dict___base", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_checksum_dict___base", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return module;
    fail:
    Py_XDECREF(module);
    return NULL;
}
