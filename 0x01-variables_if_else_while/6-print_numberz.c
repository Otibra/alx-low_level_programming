#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - A program that prints
 *
 * Description: all single digit numbers of base 10 starting from 0
 * Return: 0 when success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
