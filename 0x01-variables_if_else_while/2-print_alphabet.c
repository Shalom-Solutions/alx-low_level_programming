#include <stdio.h>

/**
 * main - Entry point
 * printing the alphabets in lowercase
 * Return: 0 (Success/Correct)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
