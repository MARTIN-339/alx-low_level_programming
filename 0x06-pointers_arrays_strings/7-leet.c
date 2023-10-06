#include "main.h"

/**
 * leet - Encode a string into "1337".
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char leet_chars[] = "aAeEoOtTlL";
	char leet_replacements[] = "4433007711";
	int i;

	for (; *ptr; ptr++)
	{
	for (i = 0; leet_chars[i]; i++)
	{
	if (*ptr == leet_chars[i])
	{
	*ptr = leet_replacements[i];
	break;
	}
	}
	}
	return (str);
}
