#include <stdio.h>

/**
 * main - Entry
 *
 * Description: print all single digits number of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;

	for (; a < 10; a++)
		putchar('0' + a);
	putchar('\n');
	return (0);
}
