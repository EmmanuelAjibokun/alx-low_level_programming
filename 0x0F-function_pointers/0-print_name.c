#include "function_pointers.h"

/**
 * print_name - prints a name through callback
 * @name: name to print
 * @f: function argument
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
