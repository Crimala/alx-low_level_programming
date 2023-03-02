#include <stdio.h>

/**
 * main - putchar function
 * prints all possible different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * numbers printed in ascending order, with two digits
 * Return: 0 Always
 */

int main(void)
{
	int d, p;

		for (d = '0'; d < '9'; d++)
		{
			for (p = d + 1; p <= '9'; p++)
			{
				if (p != d)
				{
					putchar(d);
					putchar(p);
					if (d == '8' && p == '9')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');

	return (0);
}
