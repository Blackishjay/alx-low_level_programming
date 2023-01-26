#include "function_pointers.h"

/**
  * print_name-prints a name
  * @name:name to prints
  * @f:pointer to function
  *
  * Return:Void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
