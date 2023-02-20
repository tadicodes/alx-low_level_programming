#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero
 * Return (0)
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if ((1 / 10) == (i % 10) || (i % 10) || (i % 10) == 0 || (i / 10) > (i % 10))
		{continue;}

		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		if ((i / 10) == 8)
		{break;}
		putchar(',');
		putchar('');
	}
	putchar('\n');
	{return 0;}
}
