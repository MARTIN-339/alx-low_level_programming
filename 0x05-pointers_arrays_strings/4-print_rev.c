#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 */
void print_rev(char *s)
{
	int C = 0;

	int _putchar(char c);

	while (s[C] != '\0')
	{
	C++;
	}
	for (C -= 1; C >= 0; C--)
	{
	_putchar(s[C]);
	}
	_putchar('\n');
}
