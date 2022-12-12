#include <stdio.h>
/**
 * main - prints all combination of single digits
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a == 57)
			break;
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
