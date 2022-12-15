#include "main.h"
/**
 *more_numbers-it prints 10x the numbers from 0-14
 *
 *Return: void
 */
void more_numbers(void)
{
	int a, b = 0;
	char num[] = "01234567891011121314";

	while (b < 10)
	{
		for (a = 0; a <= 19; a++)
		{
			_putchar(num[a]);
		}

		_putchar(10);
		b++;
	}
}
