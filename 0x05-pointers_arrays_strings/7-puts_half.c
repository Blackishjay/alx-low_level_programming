#include "main.h"
/**
 *puts_half-it prints half of a string
 *@str:pointer
 *Return: void
 */
void puts_half(char *str)
{
	int half = 0, a;

	while (half >= 0)
	{
		if (str[half] == '\0')
			break;
		half++;
	}
	if (half % 2 == 1)
		a = half / 2;
	else
		a = (half - 1) / 2;
	for (a++; a < half; a++)
		_putchar(str[a]);
	_putchar('\n');
}
