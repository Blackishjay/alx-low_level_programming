#include "main.h"
#include <stddef.h>

/**
 *_strpbrk- it searches a string for any of a set of bytes
 *@s:string
 *@accept:string
 *
 *Return: NULL if no such byte is found in s that matches bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (&s[a]);
		}

	}

	return (NULL);
}
