#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @n: An integer to swap
 * @p: Another integer to swap
 *
 * Return: void
 */
void swap_int(int *n, int *p)
{
	int result;

	result = *n;
	*n = *p;
	*p = result;
}
