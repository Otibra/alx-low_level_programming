#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - A program that prints alphabet in lowercase and  in uppercase
 *
 * Return: 0 when success
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (lower = 'A'; lower <= 'Z'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');

	return (0);
}
