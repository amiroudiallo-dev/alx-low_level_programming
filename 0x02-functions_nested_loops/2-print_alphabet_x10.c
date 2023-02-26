#include "main.h"

/**
 * print_alphabet_x10 - print 10 time the aplhabet in lowercase
 *
 * Return: always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
