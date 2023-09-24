#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: Pointer to the string to be printed.
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	int _putchar(char c);

	while (str[j] != '\0')
	{
	j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
