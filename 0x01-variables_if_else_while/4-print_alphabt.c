#include <stdio.h>

/**
 * main - Entry
 *
 * Description: Alphabet lower case
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
		putchar('\n');
		return (0);
	}
}
