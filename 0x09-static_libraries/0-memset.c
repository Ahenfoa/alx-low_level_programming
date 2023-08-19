#include "main.h"
/**
* _memset - fills memory with a specific value
* @s: memory to be filled at the starting address
* @b: holds the required value
* @n: number of bytes that will be changed
*
* Return: the changed array value with a new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
int z = 0;
for (; n > 0; z++)
{
s[z] = b;
n--;
}
return (s);
}
