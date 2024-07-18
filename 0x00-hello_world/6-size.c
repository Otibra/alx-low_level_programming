#include <stdio.h>

/**
 * main - a program that prints the size of various types on the computer
 * Return: 0 when success
 */

int main(void)
{
	printf("size of char: %lu byte(s)\n",(unsigned long)sizeof(char));
	printf("size of int: %lu byte(s)\n",(unsigned long sizeof(int));
	printf("size of long int: %lu byte(s)\n",(unsigned long)sizeof(long int));
	printf("size of long long int: %LU byte(s)\n",(unsigned long)sizeof(long long int));
	pritf("size of float: %lu byte(s)\n",(unsigned long)sizeof(float));

	return (0);
}

