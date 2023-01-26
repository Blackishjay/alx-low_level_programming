#include "variadic_functions.h"

/**
 * print_strings-it prints a number followed by a separator
 * @separator:string to separate the numbers
 * @n:number of arguments
 *
 * Return:Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a;

	int *arr = malloc(sizeof(int) * n);

	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		if (va_arg(args, char *) == NULL)
			arr[a] = 1;
		else
			arr[a] = 0;
	}
	va_end(args);

	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		if (arr[a] == 1)
			printf("(nil)");
		else
			printf("%s", va_arg(args, char *));
		if (a < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	putchar('\n');
}
