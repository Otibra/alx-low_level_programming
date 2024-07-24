#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - A program will assign a random number to the variable
 * Return: (0) when success
 */

int main(void)
{
	int n, lastd;

	srand(time(0));
		n = rand() - RAND_MAX / 2;
		lastd = n % 10;

		if (lastd > 5)
		{
			printf("last digit of %d is %d is greater than 5\n", n, lastd);
		}
		else if (lastd == 0)
		{
			printf("last digit of %d is %d and is 0\n", n, lastd);
		}
		else if (lastd < 5 && lastd != 0)
		{
			printf("last digit of %d is %d and is less than 5 and not 0\n", n, lastd);
		}
		return (0);
}
