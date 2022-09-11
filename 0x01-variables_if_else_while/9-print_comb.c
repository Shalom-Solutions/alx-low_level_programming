#include <stdio.h>

/**
 * main - entry point
 * program that prints all possible combinations of single-digit numbers
 * Return: 0(success)
 */
int main(void)
{
int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}



