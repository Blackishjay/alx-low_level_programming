#include "main.h"

/**
 *string_toupper-changes lowercase letters to uppercase
 *@n: string to be checked
 *
 *Return: uppercase string
 */

char *string_toupper(char *n)
{
	int a = 0;

	for (; n[a] != '\0'; a++)
	{
		if (n[a] >= 97 && n[a] <= 122)
			n[a] = n[a] - 32;
		else
			continue;
	}

	return (n);
}
