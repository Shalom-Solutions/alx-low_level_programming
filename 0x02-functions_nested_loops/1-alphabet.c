#include "main.h"

/**
 * print_alphabet - print alphabets in lowercase, followed by new line.
 *
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
