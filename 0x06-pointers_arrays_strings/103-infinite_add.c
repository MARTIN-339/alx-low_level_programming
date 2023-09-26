#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Add two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer r.
 *
 * Return: A pointer to the result or 0 if the result can't be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum, i, j;

	while (n1[len1])
	len1++;
	while (n2[len2])
	len2++;
	if (len1 + 2 > size_r || len2 + 2 > size_r)
	return (0);
	i = len1 - 1;
	j = len2 - 1;
	r[size_r - 1] = '\0';
	while (i >= 0 || j >= 0 || carry)
	{
	sum = carry;
	if (i >= 0)
	sum += n1[i] - '0';
	if (j >= 0)
	sum += n2[j] - '0';
	carry = sum / 10;
	r[size_r - 2] = (sum % 10) + '0';
	i--;
	j--;
	size_r--;
	}
	return (r + size_r - 1);
}
