#include <stdio.h>
/**
 *main- it finds and print the largest prime factor of the number 612852475143
 *Return: 0 if successfull
 */
int main(void)
{
	unsigned long int a = 3, b = 612852475143;

	for (; a < 12057; a += 2)
	{
		while (b % a == 0 && b != a)
			b /= a;
	}
	printf("%lu\n", b);
	return (0);
}
