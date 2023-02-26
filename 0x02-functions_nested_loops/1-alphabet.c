#include "main.h"

/**
 * print_alphabet - print lower case alphabet
 *
 * Return: always void (Success)
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
}
