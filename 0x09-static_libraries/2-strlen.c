#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int p;

	p = 0;

	while (s[p] != '\0')
	{
		p++;
	}

	return (p);
}
