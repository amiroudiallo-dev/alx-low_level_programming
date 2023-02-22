#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an integer: %zu byte(s)\n", sizeof(int));
	printf("Size of a double: %zu byte(s)\n", sizeof(double));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
