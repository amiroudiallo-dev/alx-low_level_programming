#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */

int main(void)
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
