#include "main.h"

/**
 * print_numbers - prints numbers 0 - 9
 *
 * Return: On success 1 -1 is returned, and errno is set
 */
void print_numbers(void)
{
	int pr;

	for (pr = 48; pr <= 57; pr++)
	{
		_putchar(pr);
	}
	_putchar('\n');
}
