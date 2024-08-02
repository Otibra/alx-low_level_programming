#include "main.h"

/**
 * void print_alphabet_x10(void) -  function that prints
 * Description: 10 times the alphabet, in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
	char lower;
	int i;

	for (i = 0; i <= 10;)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
		_putchar('\n');
		i++;
	}
}
