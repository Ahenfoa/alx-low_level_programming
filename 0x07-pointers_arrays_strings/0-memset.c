#include "main.h"
/**
 * _memset- fills the first byte with constant byte
 * @s: area to be filled
 * @b: constant value
 * @n: bytes to replace
 *
 * Return: filled arrray for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int d = 0;

	for (; n > 0; d++)
	{
		s[d] = b;
		n--;
	}
	return (s);
}
