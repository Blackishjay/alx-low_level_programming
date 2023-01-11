#include <stdio.h>
#include <stdlib.h>

/**
 *main-it prints the minimum number of coins to make change for an
 *amount of money
 *@argc:int
 *@argv: char
 *
 *Return: 0 if successful, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int a = 0, money = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	while (money > 0)
	{
		if (money - 25 >= 0)
		{
			money -= 25;
		}
		else if (money - 10 >= 0)
		{
			money -= 10;
		}
		else if (money - 5 >= 0)
		{
			money -= 5;
		}
		else if (money - 2 >= 0)
		{
			money -= 2;
		}
		else if (money - 1 == 0)
		{
			money -= 1;
		}
		a++;
	}
	printf("%d\n", a);
	return (0);
}
