#include "main.h"
/**
 *_strlen-it returns the length
 *
 *@s:pointer
 *Return: 0 if succesful
 */
int _strlen(char *s)
{
	int len;
	int test;

	for (len = 0, test = 0; *(s + test) != '\0'; test++)
	{
		len++;
	}
	return (len);
}
