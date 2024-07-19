#include <stdio.h>

/**
 * main - A program that prints the size of various types on the computer
 * Return: 0(success)
 */

int main(void)
{
	char c;
	int a;
	long int b;
	long long int d;
	float f;

	printf("size of char: %lu byte(s)\n ", (unsigned long)sizeof(c));
	printf("size of int: %lu byte(s)\n ", (unsigned long)sizeof(a));
	printf("size of long int: %lu byte(s)\n ", (unsigned long)sizeof(b));
	printf("size of long long int: %lu byte(s)\n ", (unsigned long)sizeof(d));
	printf("size of float: %lu byte(s)\n ", (unsigned long)sizeof(f));

	return (0);
}
