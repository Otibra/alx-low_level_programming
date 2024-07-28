#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - program prints possible different combinations of two digits
 *
 * Return: 0 when success
 */

int main(void)
{
	int i, d;

	for (i = '0'; i <= '8'; i++)
	{
		for (d = i + 1; d <= '9'; d++)
		{
			if (i != d)
			{
				putchar(i);
				putchar(d);

				if (i == '8' && d == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
