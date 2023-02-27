#include "main.h"

/**
 * _strlen - return the len of a string
 *
 * @c: parameter
 *
 * Return: lenght
 */

int _strlen(char *c)
{
	int l = 0;

	for (; c != '\0'; c++)
	{
		l++;
	}
	return (l);
}
