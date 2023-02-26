#include <unistd.h>

/**
* putchar - write the character c to stdout
*
* @c: The character to print
*
* Return: 0 (success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	char c;
	_putchar(c);
}
