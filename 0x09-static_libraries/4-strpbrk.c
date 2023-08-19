#include "main.h"
/**
* _strpbrk - starting point
* @s: data
* @accept: data
* Return: always return 0 if successful
*/
char *_strpbrk(char *s, char *accept)
{
int x;
while (*s)
{
for (x = 0; accept[x]; x++)
{
if (*s == accept[x])
return (s);
}
s++;
}
return ('\0');
}
