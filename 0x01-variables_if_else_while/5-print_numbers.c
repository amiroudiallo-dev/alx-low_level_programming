#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int a = 0;
	for (; a < 10; a++)
		printf("%d" ,a);
	putchar('\n');
	return (0);
}
