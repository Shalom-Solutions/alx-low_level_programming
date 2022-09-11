#include <stdio.h>
#include <stdlib.h>

/**
 * main - Event commencement
 * Printing the alphabets in Uppercase and Lowercase
 * Return: 0 (Success/Correct)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}

