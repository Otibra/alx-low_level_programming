#include<stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return: 0 when success
 */

int main(void)
{
	char c;

	for (c = 'a'; c >= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
	return (0);
}
