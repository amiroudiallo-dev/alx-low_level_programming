#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a string contains only digits
 * @s: string to check
 * Return: 1 if only digits, 0 otherwise
 */
int is_digit(char *s)
{
    while (*s)
    {
        if (*s < '0' || *s > '9')
            return (0);
        s++;
    }
    return (1);
}

/**
 * multiply - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 * Return: result of multiplication
 */
void multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0, i, j;
    int *result, carry, n1, n2, sum;

    while (num1[len1])
        len1++;
    while (num2[len2])
        len2++;

    result = calloc(len1 + len2, sizeof(int));

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        n1 = num1[i] - '0';

        for (j = len2 - 1; j >= 0; j--)
        {
            n2 = num2[j] - '0';
            sum = n1 * n2 + result[i + j + 1] + carry;
            result[i + j + 1] = sum % 10;
            carry = sum / 10;
        }
        result[i + j + 1] += carry;
    }

    for (i = 0; i < len1 + len2; i++)
    {
        if (result[i] != 0 || i == len1 + len2 - 1)
        {
            while (i < len1 + len2)
            {
                printf("%d", result[i]);
                i++;
            }
            break;
        }
    }
    printf("\n");

    free(result);
}

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: 0 on success, 98 on incorrect number of arguments or non-digit input
 */
int main(int argc, char *argv[])
{
    if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
    {
        printf("Error\n");
        return (98);
    }

    multiply(argv[1], argv[2]);

    return (0);
}
