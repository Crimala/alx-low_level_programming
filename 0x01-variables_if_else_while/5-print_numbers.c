#include <stdio.h>

/**
 * main - putchar &for function
 * prints all single digit numbers of base 10 starting from 0
 * followed by a new line
 * Return: 0 Always (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%i", num);
	putchar('\n');

	return (0);
}
