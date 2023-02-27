#include "main.h"

/**
 * _puts - print a string followed by new line
 *
 * @str: paramater
 *
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
