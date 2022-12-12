#include <stdio.h>
/**
 * main - prints a-z in lower cases but reverse
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);

	putchar('\n');

	return (0);
}
