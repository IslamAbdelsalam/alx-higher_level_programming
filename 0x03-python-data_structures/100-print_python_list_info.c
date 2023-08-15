#include <Python.h>
#include <object.h>
#include <listobject.h>
/**
 * print_python_list_info - Prints information about a Python list object.
 * @p: A pointer to a PyObject representing a Python list.
 *
 * This function prints various information about a Python list
 * , such as its size,
 * the number of allocated elements, and the type of each element. It takes a
 * pointer to a PyObject representing a Python list as its argument.
 */
void print_python_list_info(PyObject *p)
{
	long int size = PyList_Size(p);
	int i;
	PyListObject *obj = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", size);
	printf("[*] Allocated = %li\n", obj->allocated);
	for (i = 0; i < size; i++)
		printf("Element %i: %s\n", i, Py_TYPE(obj->ob_item[i])->tp_name);
}
