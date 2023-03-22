#include "function_pointers.h"

/**
 * print_name - print a name using functin pointer.
 * @name: name to print.
 * @f: function pointer to print name by it.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0)
		f(name);
}
