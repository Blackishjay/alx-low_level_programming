#include "main.h"

/**
 *print_chessboard- prints a chessboard
 *@a: the matrix
 *
 *Return: void
 */

void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(*(*(b + a) + c));
		}
	_putchar('\n');
	}
}