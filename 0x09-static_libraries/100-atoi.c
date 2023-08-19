#include "main.h"
/**
* _atoi - changes a string into an integer.
*
* @s: string
*
* Return: returns an integer.
*/
int _atoi(char *s)
{
int sign = 1, y = 0;
unsigned int res = 0;
while (!(s[y] <= '9' && s[y] >= '0') && s[y] != '\0')
{
if (s[y] == '-')
sign *= -1;
y++;
}
while (s[y] <= '9' && (s[y] >= '0' && s[y] != '\0'))
{
res = (res * 10) + (s[y] - '0');
y++;
}
res *= sign;
return (res);
}
