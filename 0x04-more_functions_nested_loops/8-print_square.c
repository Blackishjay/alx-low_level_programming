#include "main.h"
/**
 *print_square- it prints square
 *@size: it is the size of the square
 *Return: void
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}

			_putchar(10);
		}
	}
}
