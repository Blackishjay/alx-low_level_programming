#include "main.h"

/**
 *_strcat- concatenates two strings
 *@dest:string to be concatenated to
 *@src: string to be concatenated
 *
 *Return: dest string
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, dest_len = 0, src_len = 0;

	while (dest[src_len] != '\0')
	{
		dest_len++;
		src_len++;
	}

	for (; src[a] != '\0'; a++)
	{
		dest[dest_len + a] = src[a];
	}
	dest[dest_len + a] = '\0';

	return (dest);
}
