#include <stdio.h>

/**
 * main - Entry point
 * Printing all numbers with putchar
 * Return: Always 0(Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');

	return (0);
}
