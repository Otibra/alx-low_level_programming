#include <stdio.h>

/**
 * main - a program that prints the size of various types on the computer
 * Return: 0 when successfull
 */

int main(void)
{
        int a;
        char b;
        long int g;
        long long int h;
	float f;

        printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
        printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(a));
        printf("Size of a long int : %lu byte(s)\n", (unsigned long)sizeof(g));
        printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(h));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
        return (0);
}
