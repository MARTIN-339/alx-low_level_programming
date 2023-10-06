#include "main.h"

/**
 * rot13 - Encode a string using ROT13.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;

	for (; *ptr; ptr++)
	{
	for (i = 0; alpha[i]; i++)
	{
	if (*ptr == alpha[i])
	{
	*ptr = rot13[i];
	break;
	}
	}
	}
	return (str);
}
