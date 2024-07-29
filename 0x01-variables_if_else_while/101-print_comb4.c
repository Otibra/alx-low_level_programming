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

	for (p = '0'; p < '7'; p++)
	{
		for (q = p + 1; q < '8'; q++)
		{
			for (r = q + 1; r < '9'; r++)
			{
				if ((p != q) != r)
				{
					putchar(p);
					putchar(q);
					putchar(r);

					if (p == '7' && q == '8')
						continue;
						putchar(',');
						putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

