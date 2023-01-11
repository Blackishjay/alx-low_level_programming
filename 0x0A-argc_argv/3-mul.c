#include <stdio.h>
#include <stdlib.h>

/**
 *main-it prints the multiplication of 2 args numbers
 *@argc: int
 *@argv:char
 *
 *Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
