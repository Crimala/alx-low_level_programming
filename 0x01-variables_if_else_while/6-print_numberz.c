#include <stdio.h>

/**
 * main - putchar &for function
 * prints all single digit numbers of base 10 starting from 0
 * followed by a new line
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar ('0' + i);
	putchar ('\n');

	return (0);
}
