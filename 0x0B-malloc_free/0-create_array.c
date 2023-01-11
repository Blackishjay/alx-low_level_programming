#include "main.h"
#include <stdlib.h>

/**
 *create_array- it creates an arrays of chars and initializes it
 *with a specific char
 *
 *@size: the size of the array
 *@c: char
 *
 *Return: array filled
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *b;

	if (size == 0)
		return (NULL);
	b = malloc(size * sizeof(char));

	if (b == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		b[a] = c;
	}

	return (b);
}
