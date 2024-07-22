#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - A program will asign a random number to the variable
 * Description: The variable will be either positive or negative
 *
 * Return: 0 success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
