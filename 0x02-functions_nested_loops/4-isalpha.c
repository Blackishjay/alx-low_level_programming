#include "main.h"
/**
 *_isalpha- it checks for alphabetic character
 *@c: This is an ASCII character to be checked
 *Return: 1 if successful return 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
