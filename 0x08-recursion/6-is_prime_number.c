#include "main.h"

/**
 *check_prime-check if number is prime
 *@n: number to be checked
 *@a: iteration
 *
 *Return: 1 for prime or 0 otherwise
 */

int check_prime(int n, int a)
{
	if (n <= 1)
		return (0);
	else if (n % a == 0 && a > 1)
		return (0);
	else if ((n / a) < a)
		return (1);
	return (check_prime(n, a + 1));
}

/**
 *is_prime_number- returns if number is prime
 *@n: number to be checked
 *
 *Return: int
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
