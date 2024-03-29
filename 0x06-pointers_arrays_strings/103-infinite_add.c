#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * infinite_add - adds two numbers as strings
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result (r) or 0 if the result cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1, len2, carry, sum, i, j;
    
    len1 = strlen(n1);
    len2 = strlen(n2);
    carry = 0;

    if (size_r <= len1 || size_r <= len2)
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

    return (r);
}
