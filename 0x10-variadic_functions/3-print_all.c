#include "variadic_functions.h"

/**
 * print_all-it prints all inputs to the screen
 * @format:string containing the format
 *
 * Return:Void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int a = 0, b, c = 0;
	char *str;
	const char fmt[] = "cifs";

	va_start(args, format);
	while (format && format[a])
	{
		b = 0;
		while (fmt[b])
		{
			if (fmt[b] == format[a] && c)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(args, int)), c = 1;
			break;
		case 'i':
			printf("%i", va_arg(args, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double)), c = 1;
			break;
		case 's':
			str = va_arg(args, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} a++;
	}
	printf("\n"), va_end(args);
}
