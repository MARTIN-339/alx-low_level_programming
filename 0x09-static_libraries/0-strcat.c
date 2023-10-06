#include "main.h"

/**
 * _strcat - Concatenate two strings.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
	dest++;
	}
	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	return (result);
}
