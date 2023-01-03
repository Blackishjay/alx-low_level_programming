#include "main.h"

/**
 *_strspn- it gets the length of a prefix substring
 *@s: string
 *@accept:string
 *
 *Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, count2 = 0;
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				count++;
		}

		count2++;
		if (count == 0 || count != count2)
			break;
	}

	return (count);
}
