#include <stdio.h>

/**
 * main - putchar
 * prints all the numbers of base 16 in lowercase
 * followed by a line
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
		putchar ('0' + i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar (ch);
	putchar ('\n');

	return (0);
}
