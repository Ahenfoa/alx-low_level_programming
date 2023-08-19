#include "main.h"
/**
* char *_strcpy - copies the string pointed to by src
* @dest: copies
* @src: copies
* Return: returns a string
*/
char *_strcpy(char *dest, char *src)
{
int p = 0;
int f = 0;
while (*(src + p) != '\0')
{
p++;
}
for (; p < f ; p++)
{
dest[f] = src[f];
}
dest[p] = '\0';
return (dest);
}
