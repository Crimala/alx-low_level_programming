#include <stdio.h>

/**
 * main - putchar
 * prints the lowercase alphabet in reverse
 * followed by a new line
 * Return: 0 Always (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar (ch);
	putchar('\n');

	return (0);
}
