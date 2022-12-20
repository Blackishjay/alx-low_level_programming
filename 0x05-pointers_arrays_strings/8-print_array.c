#include <stdio.h>
#include "main.h"
/**
 *print_array-it prints n elements of an array of integers
 *@a:point
 *@n: is the number of elements of the array to be printed
 *Return: void
 */
void print_array(int *a, int n)
{
	int b = 0;

	for (; b < n; b++)
	{
		printf("%d", *(a + b));
		if (b != (n - 1))
			printf(", ");
	}
	printf("\n");
}
