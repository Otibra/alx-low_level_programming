#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return: 0 when success
 */

int main(void)
{
	char lower, q, e;

	q = 'q';
	e = 'e';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != q && lower != e)
		{
			putchar(lower);
		}
	}
	putchar('\n');

	return (0);
}
