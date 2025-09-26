#include "function_pointers.h"

/**
 * print_name - prints a name using function pointer
 * @name: name to print
 * @f: function pointer to print function
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
