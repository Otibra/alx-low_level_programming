#include "main.h"

/**
 * print_alphabet - function that prints the alphabet
 *
 * Return: o when success
 */

void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
}
