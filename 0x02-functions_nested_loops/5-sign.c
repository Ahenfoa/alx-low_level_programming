#include "main.h"
#include <unistd.h>
/**
* print_sign - a function that prints the sign of a number
* @n: The sign to print
*
* Return:  1 if positive, 0 if zero, -1 if negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		write(1, "+", 1);
		return (1);
	}
	else if (n == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	else
	{
		write(1, "-", 1);
		return (-1);
	}

}
