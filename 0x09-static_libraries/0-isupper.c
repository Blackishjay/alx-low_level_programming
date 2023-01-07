#include "main.h"

/**
 *_isupper- it checks for uppercase character
 *
 *@c: it is an ascii character
 *Return: 0 if successful
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	return (0);
}
