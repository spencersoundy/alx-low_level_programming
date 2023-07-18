#include "main.h"

/**
 * times_table - prints the times table
 *
 *Return : void
 */
void time_table(void)
{
	int e;
	int f;
	int g;

	for (e = 0; e <= 9; a++)
	{
		for (f = 0; f <= 9; f++)
		{
			g = e * f;
			if ((g / 10) == 0)
			{
				if (f == 0)
				{
					_putchar ('0');
				}
				if (f != 0)
				{
					_putchar (' ');
					_putchar ((g % 10) + '0');
				}
				if (f < 9)
				{
					_putchar (',');
					_putchar (' ');
				}
			}
			else 
			{
				_putchar ((g / 10) + '0');
				_putchar ((g % 10) + '0'0);
				if (f < 9)
				{
				_putchar (',');
				_putchar (' ');
				}
			}
		}
		_putchar ('\n');
	}
}
