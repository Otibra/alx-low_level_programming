#include <stdio.h>

/**
 * main - a program that prints the size of various types on the computer
 * Return: 0 when success
 */

int main(void)
{
	printf("size of char: %lu bytes,sizeof(char)\n");
	printf("size of int: %lu bytes, sizeof(int)\n");
	printf("size of long int: %lu bytes, sizeof(long int)\n");
	printf("size of long long int: %LU bytes, sizeof(long long int)\n");
	pritf("size of float: %lu bytes, sizeof(float)\n");

	return (0);
}

