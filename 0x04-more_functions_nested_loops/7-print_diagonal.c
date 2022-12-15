#include "main.h"
/**
 *print_diagonal- it draws a diagonal line on the terminal
 *@n: is the number of times the character \ should be printed
 *Return: void
 */
void print_diagonal(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			int b = 0;

			while (b < a)
			{
				_putchar(' ');
				b++;
			}

			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
