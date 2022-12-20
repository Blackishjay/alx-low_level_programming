#include "main.h"
/**
 *_strcpy-it copies the string pointed by src to dest
 *@src:pointer
 *@dest: pointer
 *Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; *(src + a) != '\0'; a++)
	{
		dest[a] = *(src + a);
	}
	dest[a] = '\0';

	return (dest);
}
