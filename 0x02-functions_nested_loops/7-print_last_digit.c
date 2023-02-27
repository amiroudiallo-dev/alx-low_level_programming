#include "main.h"

/**
 * print_last_digit - method print the last digit of a number
 *
 * @n : parameter reprsente number
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}

	_putchar('0' + (n % 10));

	return (n % 10);
}	
