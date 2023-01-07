#include "main.h"
#include <stddef.h>

/**
 *_strchr- ut locates a character in a string
 *@s: string
 *@c: character of a string
 *
 *Return: NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\n'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}

	return (NULL);
}
