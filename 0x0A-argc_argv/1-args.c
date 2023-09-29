#include <stdio.h>

/**
*  main - prints its name, followed by a new line.
*  @argc: int arg
*  @argv: char arg
*  Return: int
*/

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
