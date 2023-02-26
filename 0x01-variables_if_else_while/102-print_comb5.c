#include <stdio.h>

/**
 * main - Entry
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int first;
	int second;
	int third;
	int four;

	for (first = '0'; first <= '9'; first++)
	{
		for (second = '0'; second <= '9'; second++)
		{
			for (third = first; third <= '9'; third++)
			{
				for (four = second + 1; four <= '9'; four++)
				{
					putchar(first);
					putchar(second);
					putchar(' ');
					putchar(third);
					putchar(four);

					if (!((first == '9' && second == '8') &&
					      (third == '9' && four == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
