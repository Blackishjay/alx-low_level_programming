#include "main.h"
/**
 *puts2- it prints every other character of a string with the first character
 *@str:pointer
 *
 *Return: void
 */
void puts2(char *str)
{
	int a;

	a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
			_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
