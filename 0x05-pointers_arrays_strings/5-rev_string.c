#include "main.h"
/**
 *rev_string- it reverses a string
 *@s:pointer
 *Return: void
 */
void rev_string(char *s)
{
	int a, b, c;
	char first, last;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	b = a - 1;
	c = b / 2;

	while (c >= 0)
	{
		first = s[b - c];
		last = s[c];
		s[c] = first;
		s[b - c] = last;
		c--;
	}
}
