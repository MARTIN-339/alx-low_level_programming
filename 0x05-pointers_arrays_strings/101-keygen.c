#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[100];
	int sum = 0;
	int i;
	int diff;

	srand(time(NULL));
	for (i = 0; sum < 2772 - 122; i++)
	{
	password[i] = rand() % 122 + 1;
	sum += password[i];
	}
	diff = 2772 - sum;
	password[i] = diff;
	password[i + 1] = '\0';
	printf("%s", password);
	return (0);
}
