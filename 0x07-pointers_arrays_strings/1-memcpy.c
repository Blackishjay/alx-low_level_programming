#include "main.h"


/**
 *_memcpy-copies memory area
 *@dest:copies memory area from src
 *@src: copies memory area from n bytes
 *@n: number of bytes
 *
 *Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
