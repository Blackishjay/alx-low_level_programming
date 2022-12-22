#include "main.h"

/**
 *reverse_array- flip array
 *@a: array to be flipped
 *@n: number of elements in the array
 *
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int b = 0, first, last, keep, counts;

	counts = n / 2;
	first = 0;
	last = n - 1;

	for (; b < counts; b++)
	{
		keep = a[first];
		a[first] = a[last];
		a[last] = keep;
		first++;
		last--;
	}
}
