#include "main.h"

/**
 *_strcmp-it compares 2 strings
 *@s1: first string
 *@s2: second string
 *
 *Return: An int, 0 if equal, positve if 1 > 2, negative if 1 < 2
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0;

	while (a == 0)
	{
		if ((*(s1 + b) == '\0') && (*(s2 + b) == '\0'))
			break;
		a = *(s1 + b) - *(s2 + b);
		b++;
	}

	return (a);
}
