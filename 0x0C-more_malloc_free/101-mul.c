#include <stdio.h>
#include <stdlib.h>

int _putchar(char c)
{
    return write(1, &c, 1);
}

int is_digit(char c)
{
    return c >= '0' && c <= '9';
}

void print_error(void)
{
    printf("Error\n");
    exit(98);
}

void multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0, i, j;
    int *result, carry, prod, sum;

    while (num1[len1])
        len1++;
    while (num2[len2])
        len2++;

    result = malloc(sizeof(int) * (len1 + len2));

    if (result == NULL)
        print_error();

    for (i = 0; i < len1 + len2; i++)
        result[i] = 0;

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            prod = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
            carry = prod / 10;
            result[i + j + 1] = prod % 10;
        }
        result[i + j + 1] += carry;
    }

    for (i = 0; i < len1 + len2; i++)
    {
        if (i == 0 && result[i] == 0)
            continue;
        _putchar(result[i] + '0');
    }

    _putchar('\n');

    free(result);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
        print_error();

    for (int i = 1; i < 3; i++)
    {
        int j = 0;
        while (argv[i][j])
        {
            if (!is_digit(argv[i][j]))
                print_error();
            j++;
        }
    }

    multiply(argv[1], argv[2]);

    return 0;
}
