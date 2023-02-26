#include "main.h"

/**
 * _islower - check for lowercase character
 *
 * @c : parameter to check
 *
 * Return: 1 if islower 0 isupper
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
