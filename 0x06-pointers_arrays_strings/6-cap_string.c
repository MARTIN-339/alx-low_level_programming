#include "main.h"
#include <stdbool.h>
/**
 * cap_string - Capitalize all words in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	bool capitalize_next = true;

	while (*ptr)
	{
	if (*ptr >= 'a' && *ptr <= 'z' && capitalize_next)
	{
	*ptr -= 32;
	capitalize_next = false;
	}
	else if (
	*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
	*ptr == ',' || *ptr == ';' || *ptr == '.' ||
	*ptr == '!' || *ptr == '?' || *ptr == '"' ||
	*ptr == '(' || *ptr == ')' || *ptr == '{' ||
	*ptr == '}')
	{
	capitalize_next = true;
	}
	else
	{
	capitalize_next = false;
	}
	ptr++;
	}
	return (str);
}
