#include "main.h"
/**
 * _strspn - entry point
 * @s: pointer
 * @accept: pointer
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value;

	value = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				break;
			}
		}
		if (accept[n] == '\0')
		{
			break;
		}
	}
	return (value);
}
