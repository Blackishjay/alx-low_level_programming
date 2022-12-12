#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a <= 55; a++)
	{
		for (b = 49; b <= 56; b++)
		{
			for (c = 50; c <= 57; c++)
			{
				if ((a >= b) || (b >= c))
					continue;
				putchar(a);
				putchar(b);
				putchar(c);
				if ((c == 57) && (b == 56))
				{
					if (a == 55)
						break;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
