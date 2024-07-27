#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - a program that print
 *
 * Description: all single digit numbers of base 10 starting from 0
 * Return: 0 when success
 */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
