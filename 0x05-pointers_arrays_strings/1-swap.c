#include "main.h"
/**
 *swap_int- it swaps the values of 2 integer
 *@a:pointer
 *@b:pointer
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
