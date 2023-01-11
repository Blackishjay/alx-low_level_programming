#include <stdio.h>

/**
 *main-it prints the name
 *@argc: int
 *@argv: char
 *
 *Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
