#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - A program that prints the lowercase alphabet in reverse
 *
 * Return: 0 when success
 */

int main(void)
{
	char lower;

	for (lower = 'z'; lower <= 'a'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
