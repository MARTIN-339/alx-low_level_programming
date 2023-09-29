#include "main.h"
/**
 * _isalpha - return 1 when c is low or cap
 *
 * @c: collects the character
 *
 * Description: we are using _putchar
 *
 * Return: 1 if c is lower
 */
int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (lower == c || upper == c)
			{
				letter = 1;
			}
		}
	}
	return (letter);
}
