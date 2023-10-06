#include <stdio.h>
#include <stdlib.h>

/**
 * min_number_of_coins - calculates the minimum number of coins needed
 * to make change for an amount of money
 * @cents: the amount of money in cents
 *
 * Return: the minimum number of coins
 */
int min_number_of_coins(int cents)
{
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = 0;
	int i;

	for (i = 0; i < 5; i++)
	{
	while (cents >= coins[i])
	{
	cents -= coins[i];
	num_coins++;
	}
	}
	return (num_coins);
}

/**
 * main - entry point of the program
 * @argc: the number of command-line arguments
 * @argv: an array containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	cents = 0;
	printf("%d\n", min_number_of_coins(cents));
	return (0);
}
