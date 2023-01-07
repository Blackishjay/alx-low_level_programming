#include "main.h"
/**
 *_puts-it prints a string to stdout
 *@str:pointer
 *
 *Return: void
 */
void _puts(char *str)
{
	int test;

	for (test = 0; *(str + test) != '\0'; test++)
	{
		_putchar(*(str + test));
	}
	_putchar('\n');
}
