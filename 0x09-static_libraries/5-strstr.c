#include "main.h"
/**
* _strstr - starting point
* @haystack: data
* @needle: data
* Return: always 0 if successful
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *s = haystack;
char *t = needle;
while (*s == *t && *t != '\0')
{
s++;
t++;
}
if (*t == '\0')
return (haystack);
}
return (0);
}
