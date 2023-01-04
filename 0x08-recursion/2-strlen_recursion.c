#include "main.h"

/**
 *_strlen_recursion- it returns the length of a string
 *@s: string
 *
 *Return: the integer length of a given  string
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s != 0)
	{
		a = _strlen_recursion(s + 1);
		return (++a);
	}

	return (a);
}
