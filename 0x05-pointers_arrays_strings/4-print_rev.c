#include "2-strlen.c"
#include "main.h"
/**
 *print_rev- it prints a string in reverse
 *@s:pointer
 *Return: void
 */
void print_rev(char *s)
{
	int test;

	for (test = _strlen(s) - 1; test >= 0; test--)
	{
		_putchar(*(s + test));
	}
	_putchar('\n');
}
