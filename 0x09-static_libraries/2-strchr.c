#include "main.h"
#include <stddef.h>
/**
* _strchr - start point
* @s: data
* @c: data
* Return: Always return 0 hen succesful
*/
char *_strchr(char *s, char c)
{
int k = 0;
for (; s[k] >= '\0'; k++)
{
if (s[k] == c)
return (&s[k]);
}
return (0);
}
