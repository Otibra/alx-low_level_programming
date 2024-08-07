#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @n: the number whose sign is to be determined
 * return: 1 for the positive number, -1 for negative number or 0 for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
