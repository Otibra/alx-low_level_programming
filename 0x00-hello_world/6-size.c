#include <stdio.h>

/**
 * main - a program that prints the size of various types on the computer
 * Return: 0 when success
 */

int main(void)
{
	printf("size of char: %lu byte(s); sizeof(char)");
	printf("size of int: %lu byte(s); sizeof(int)");
	printf("size of long int: %lu byte(s); sizeof(long int)");
	printf("size of long long int: %LU byte(s); sizeof(long long int)");
	pritf("size of float: %lu byte(s); sizeof(float)");

	return (0);
}

