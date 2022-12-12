#include <stdio.h>
/**
 *main- it prints all possible combinations of two two-digit numbers
 *
 *Return: 0 if succesfull
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if (a < b)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(32);
				putchar((b / 10) + 48);
				putchar((b % 10) + 48);
				if (a != 98 || b != 99)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
