#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: lower bound
  * @max: upper
  *
  * Return: integer pointet
  */
int *array_range(int min, int max)
{
	int *p, a = 0;

	if (min > max)
		return (NULL);

	p = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		p[a] = min;
		a++;
		min++;
	}

	return (p);
}
