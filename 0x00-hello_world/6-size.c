#include <stdio.h>

/**
 * main - a program that prints the size of various types on the computer
 * Return: 0 when success
 */

int main(void)
{
	printf("size of char: %lu byte(s)\n", sizeof(char));
	printf("size of int: %lu byte(s)\n", sizeof(int));
	printf("size of long int: %lu byte(s)\n", sizeof(long int));
	printf("size of long long int: %LU byte(s)\n", sizeof(long long int));
	pritf("size of float: %lu byte(s)\n", sizeof(float));

	return (0);
}

