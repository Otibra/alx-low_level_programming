#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main -  program prints possible different combinations of three digits
 *
 * Return: 0 when success
 */

int main(void)
{
	int p, q, r;

	for (p = 0; p <= 7; p++)
	{
		for (q = p + 0; q <= 8; q++)
		{
			for (r = q + 1; r <= 9; r++)
			{
				if ((p != q) != r)
				{
					putchar(p + '0');
					putchar(q + '0');
					putchar(r + '0');

					if (p == 7 && q == 8 && r == 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

