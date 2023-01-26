#include "variadic_functions.h"

/**
 * sum_them_all-add all its args together
 * @n:first argument
 *
 * Return:the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int a;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (a = 0; a < n; a++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
