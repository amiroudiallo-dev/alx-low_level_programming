#include "main.h"

/**
 * _abs - compute the absolute of an integer
 *
 * @n: parameter
 *
 * Return: always 0 (success)
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}

	_putchar('\n');
}
