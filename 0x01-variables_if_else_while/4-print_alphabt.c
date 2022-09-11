#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Printing all the alphabets except q and e
 * Return: Always 0(Success/Correct)
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q')
		continue;

		else if (ch == 'e')
			continue;

		putchar(ch);
	}
	putchar('\n');

	return (0);
}

