#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - ifelse & printf & while funstion
 * print the last digit of a random number and show whether it is
 * greater than 5, is 0 or less than 6 but greater than 0
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10;
	if (x > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, x);
			else if (x == 0)
		       printf("Last digit of %i is %i and is 0\n", n, x);
		else if (x < 6 && x != 0)
			printf("Last digit of %i is %i and is less than 6 and not 0\n", n, x);
		return (0);
}
