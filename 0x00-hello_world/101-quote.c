#include <stdio.h>
#include <unistd.h>

/**
 * main - A program that prints a line to the standard error
 *
 * Return: 1 on success
 */

int main(void)
{
	fputs("and that piece of art is useful\"", stdout);
	fputs(" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
