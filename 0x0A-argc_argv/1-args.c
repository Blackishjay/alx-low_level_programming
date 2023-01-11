#include <stdio.h>

/**
 *main- it prints name
 *@argc: int
 *@argv: char
 *
 *Return: 0 if successful
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
