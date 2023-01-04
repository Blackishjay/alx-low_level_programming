#include "main.h"

/**
 *_sqrt- it returns the square root of a a number
 *@n: integer
 *@a:iterate integer
 *
 *Return: square root
 */

int _sqrt(int n, int a)
{
	int sqrt = a * a;

	if (sqrt > n)
		return (-1);
	else if (sqrt == n)
		return (a);
	return (_sqrt(n, a + 1));
}

/**
 *_sqrt_recursion-returns the sqaure of a number
 *@n: int to be calcaluted
 *
 *Return: square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
