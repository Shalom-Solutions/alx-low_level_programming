#include "main.h"

/**
 * main- entru point
 *
 * A program that prints the loop of all the alphabet in small letters
 *
 * Return: void
 */

void print_alphabet(void);
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);

}
