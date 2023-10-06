#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers, starting with 1 and 2, followed by a new line 
 *  seperated by a coma followed by space
 *
 *  Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fibl = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fibl1 + fib2;
		printf("%lu", sum);

		fibl1 = fib2
		fib2 = sum;

	       if  (count == 49)
	                printf("\n");
	       else
		       printf(",");
	}
	return (0);
}
