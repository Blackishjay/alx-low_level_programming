#include "main.h"

/**
 *_strstr-it locatess a substring
 *@haystack: string
 *@needle: substring
 *
 *Return: NULL or pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *pneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
				break;
		}

		if (!*needle)
			return (result);

		needle = pneedle;
		result++;
		haystack = result;
	}

	return (0);
}
