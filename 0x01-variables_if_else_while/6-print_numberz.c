#include <stdio.h>

/**
 * main - prints out numbers from 0 to 9 without using printf
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar((a % 10) + '0');
	}
	putchar('\n');

	return (0);
}
