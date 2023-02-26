#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */

void print_alphabet(void)
{
	char alphabet;
	alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
	
	return (0);
}
