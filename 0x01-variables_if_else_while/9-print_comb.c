#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - program that prints possible combinations of single-digit numbers
 *
 * Return: 0 when success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
