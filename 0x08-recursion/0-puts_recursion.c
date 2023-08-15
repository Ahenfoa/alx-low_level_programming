#include "main.h"
/**
 * _puts_recursion - acts like puts();
 * @s: input
 * Return: returns 0 when succcessful
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
