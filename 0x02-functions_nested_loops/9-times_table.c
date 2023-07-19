#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: empty output
 */

void times_table(void)

{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			result = i * j;

			_putchar(',');
			_putchar(',');

			if (result >= 10)
				_putchar(result / 10 + '0');
			else
				_putchar(' ');
			_putchar(result % 10 + '0');
		}
		_putchar('\n');
	}
}
