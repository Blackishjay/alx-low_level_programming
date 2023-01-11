#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - Concatenates two strings
  * @s1:first string
  * @s2:second string
  *
  * Return:two strings concatenated
  */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, d = 0, e = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	e = a + b;
	c = malloc((sizeof(char) * e) + 1);

	if (c == NULL)
		return (NULL);

	b = 0;

	while (d < e)
	{
		if (d <= a)
			c[d] = s1[d];

		if (d >= a)
		{
			c[d] = s2[b];
			b++;
		}

		d++;
	}

	c[d] = '\0';
	return (c);
}
