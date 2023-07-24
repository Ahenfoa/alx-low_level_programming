<<<<<<< HEAD
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{

	int i, j, k;

	for (i = 0; i < 10; i++)
	{

		for (j = 0; j < 10; j++)
		{

			k = j * i;
			if (j == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && j != 0)
			{
				  _putchar(',');
				  _putchar(' ');
				  _putchar(' ');
				  _putchar(k + '0');
			} else if (k >= 10)
			{

				  _putchar(',');
				  _putchar(' ');	
				  _putchar((k / 10) + '0');
				  _putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
=======

>>>>>>> 634ec663aed79b3d77682c99e371395b6a513193
