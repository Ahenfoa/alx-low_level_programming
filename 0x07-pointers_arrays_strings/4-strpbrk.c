#include "main.h"
/**
 * _strpbrk - starting point
 * @s: input
 * @accept: input
 * Return: returns o when succesful
*/
char *_strpbrk(char *s, char *accept)
{

	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
		if (*s == accept[a])
		return (s);
		}
		s++;
		}

	return ('\0');
}
