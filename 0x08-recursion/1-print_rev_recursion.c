#include "main.h"
/**
 * _print_rev_recursion - diplays a string in reverse.
 * @s: print this string
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
