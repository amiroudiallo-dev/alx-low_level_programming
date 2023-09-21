#include <stdio.h>
#include <stdlib.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number as a string
 * @n2: second number as a string
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result (r) or 0 if the result cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int carry = 0;
    int sum;
    int i, j, k;

    for (i = 0, j = 0, k = 0; (n1[i] != '\0' || n2[j] != '\0' || carry); i++, j++, k++)
    {
        sum = carry;
        if (n1[i] != '\0')
            sum += n1[i] - '0';
        if (n2[j] != '\0')
            sum += n2[j] - '0';

        carry = sum / 10;
        if (k >= size_r - 1) // Check if result can fit in the buffer
            return (0);

        r[k] = (sum % 10) + '0';
    }

    r[k] = '\0';
    return (r);
}

int main(void)
{
    char num1[] = "12345";
    char num2[] = "67890";
    char result[100]; // Make sure the buffer size is sufficient

    char *sum = infinite_add(num1, num2, result, sizeof(result));
    if (sum)
    {
        printf("Sum: %s\n", sum);
    }
    else
    {
        printf("Result cannot be stored in the buffer.\n");
    }

    return (0);
}
