#include "main.h"
/**
 * _memset -  function fills the first n bytes
 * @s: integer
 * @b: interger
 * @n: interger
 *
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
