#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s
 * with the constant byte b.
 * @s: A pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int index;

    for (index = 0; index < n; index++)
    {
        s[index] = b;
    }

    return (s);
}
