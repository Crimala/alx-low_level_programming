#include <stdio.h>

/**
 * main - putchar function
 * prints all possible different combinations of three digits
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * numbers printed in  ascending order, with three digits
 * Return: (0)
 */

int main(void)
{
	int a, b, c;

	for (a = '0'; a < '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{
				if (a != b && b != c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == '8' && b == '9' && c == '9')
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

