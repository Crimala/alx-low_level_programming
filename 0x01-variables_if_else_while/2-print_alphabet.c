#include <stdio.h>

/**
 * main - putchar function
 * print the alphabet in lowercase
 * follow with a new line
 * Return: 0 Always (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	 putchar ('\n');

	return (0);
}
