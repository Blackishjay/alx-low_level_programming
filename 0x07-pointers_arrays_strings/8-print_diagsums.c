#include "main.h"
#include <stdio.h>

/**
 *print_diagsums- prints sums of 2 diagonals of a square matrix of integers
 *@a:pointer
 *@size: size
 *
 *Return: void
 */

void print_diagsums(int *a, int size)
{
	int b, sum = 0, sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum += *(a + (size * b + b));
		sum2 += *(a + (size * b + size - 1 - b));
	}

	printf("%d, ", sum);
	printf("%d\n", sum2);
}
