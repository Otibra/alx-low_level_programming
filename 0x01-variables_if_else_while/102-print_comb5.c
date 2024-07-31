#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - A program that prints
 *
 * Description: All possible combinations of two two-digit numbers
 * Return: 0 when success
 */

int main(void)
{
	int q, r;

	for (q = '0'; q <= 98; q++)
	{
		for (r = q + 1; r <= 99; r++)
		{
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');
			putchar(' ');
			putchar((r / 10) + '0');
			putchar((r % 10) + '0');

			if (q == 98 && r == 99)
				continue;
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
