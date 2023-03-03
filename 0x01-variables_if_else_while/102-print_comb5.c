#include <stdio.h>

/**
 * main - putchar function
 * prints all possible combinations of two two-digit numbers.
 * range from 0 to 99
 * separated by a space
 * with two digits. 1 should be printed as 01
 * Return: 0 Always
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			if (a != b)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
					if (a == 98 && b == 99)
						continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

