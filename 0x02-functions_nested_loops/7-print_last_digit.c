#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - method print the last digit of a number
 *
 * @n : parameter reprsente number
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
