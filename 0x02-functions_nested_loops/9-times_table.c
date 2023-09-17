#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, x, y, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (result > 9)
			{
				x = result % 10;
				y = (result - x) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(y + '0');
				_putchar(x + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
