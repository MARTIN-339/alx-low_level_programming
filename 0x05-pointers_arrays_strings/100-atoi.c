#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int C = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[C])
	{
		if (s[C] == 45)
		{
			min *= -1;
		}
		while (s[C] >= 48 && s[C] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[C] - '0');
			C++;
		}
		if (isi == 1)
		{
			break;
		}
		C++;
	}
	ni *= min;
	return (ni);
}
