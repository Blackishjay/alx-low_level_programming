#include <stdio.h>
/**
 * main - prints all possible combination of digits
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			if ((b == 57) && (a == 56))
				break;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
