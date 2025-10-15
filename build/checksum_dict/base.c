#include <Python.h>

PyMODINIT_FUNC
PyInit_base(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("checksum_dict__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_checksum_dict___base");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "checksum_dict__mypyc.init_checksum_dict___base");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_base(); }
