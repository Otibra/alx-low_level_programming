#include "main.h"


/**
 * print_last_digit - print the last digit of number
 *
 * @n: the number to be treated
 * Return: value of last digit of a number
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
