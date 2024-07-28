#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0 when success
 */

int main(void)
{
	int i;
	char lower;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (lower = 'a'; lower <= 'f'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
