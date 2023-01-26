#include "variadic_functions.h"

/**
 * print_numbers-it prints a number followed by a separator
 * @separator:the string to separate the numbers
 * @n:number of arguments
 *
 * Return:Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a;

	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		printf("%i", va_arg(args, int));
		if (a < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	putchar('\n');
}
