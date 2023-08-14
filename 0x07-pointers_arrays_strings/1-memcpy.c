#include "main.h"
/**
 * _memcpy- a function used to copy memory area
 * @dest- stores memory area
 * @src- copies memory
 * @n: states number of bytes
 *
 * Return: changed memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
