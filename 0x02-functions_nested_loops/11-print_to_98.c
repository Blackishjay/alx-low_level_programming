#include <stdio.h>
#include "main.h"
/**
 *print_to_98-it prints all natural numbers from n to 98
 *@n: this is an integer
 *
 */
void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
			{
				printf("%d, ", a);
			}
			else
			{
				printf("%d\n", a);
			}
		}
	}
	else if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			if (a != 98)
			{
				printf("%d, ", a);
			}
			else
			{
				printf("%d\n", a);
			}
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
