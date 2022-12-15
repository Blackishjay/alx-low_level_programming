#include <stdio.h>
#include "main.h"
/**
 *main- fizzbuzz test for 1-100
 *
 *Return: 0 if successfull
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			if (a == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	return (0);
}
