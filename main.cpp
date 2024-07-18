#include <Python.h>

//funcoes
int hello(){
	printf("Hi, am devunge, and this is my module for Python\n");
	return 0;
}

int sum2(int x, int y){
	return (x + y);
}

int write(const char* string){
	printf("%s", string);
	return 0;
}

//******

static PyObject* hello(PyObject* self, PyObject* args){
	return Py_BuildValue("s", hello());
}

static PyObject* sum2(PyObject* self, PyObject* args){
	int a, b;
	if(!PyArg_ParseTuple(args, "ii", &a, &b)){
		return NULL;
	}
	return Py_BuildValue("i", sum2(a, b));
}

static PyObject* write(PyObject* self, PyObject* args){
	const char* string;
	if(!PyArg_ParseTuple(args, "s", &string)){
		return NULL;
	}
	return Py_BuildValue("s", write(string));
}

static PyMethodDef devoo_methods[] = {
	{"hello", hello, METH_VARARGS, "hello from devoo"},
	{"sum2", sum2, METH_VARARGS, "sum two numbers"},
	{"write", write,METH_VARARGS, "print without new line"},
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef devoo_module = {
	PyModuleDef_HEAD_INIT,
	"devoo",
	NULL,
	-1,
	devoo_methods
};

PyMODINIT_FUNC PyInit_devoo(void){
	return	PyModule_Create(&devoo_module);
}
