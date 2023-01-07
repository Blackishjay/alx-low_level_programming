#include "main.h"

/**
 *_memset- it fills the memory with a constant byte
 *@s: pointer
 *@b: constant byte
 *@n: number of bytes
 *
 *Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
