#include <stdio.h>

/**
 * main - putchar
 * prints all possible combinations of single-digit numbers
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * Return: 0 Always (Suceess)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 10; x++)
	{
		putchar ('0' + x);
	if (x != '9')
	{
	putchar (',');
	putchar (' ');
	}
	}
	putchar ('\n');

	return (0);
}
