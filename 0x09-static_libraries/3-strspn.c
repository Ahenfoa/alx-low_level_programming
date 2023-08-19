#include "main.h"
/**
* _strspn - starting point
* @s: data
* @accept: data
* Return: always return 0
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int w;
while (*s)
{
for (w = 0; accept[w]; w++)
{
if (*s == accept[w])
{
n++;
break;
}
else if (accept[w + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
