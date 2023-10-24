#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int total_length = 0;
	int i, j, k;

	if (ac == 0 || av == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	total_length++;
	total_length++;
	}
	concatenated = malloc((total_length + 1) * sizeof(char));
	if (concatenated == NULL)
	return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	concatenated[k++] = av[i][j];
	concatenated[k++] = '\n';
	}
	concatenated[k] = '\0';
	return (concatenated);
}
