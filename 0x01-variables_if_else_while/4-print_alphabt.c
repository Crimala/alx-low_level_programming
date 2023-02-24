#include <stdio.h>

/**
 * main - putchar & for loop
 * prints the alphabet in lowercase apart from 'q'and 'e'
 * followed by a new line
 * Return: 0 Always (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' && ch != 'e')
			putchar (ch);
	putchar ('\n');

	return (0);
}
