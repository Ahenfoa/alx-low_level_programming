#include "main.h"
/**
* _strlen - returns the length of a string
* @s: string
* Return: returns the length
*/
int _strlen(char *s)
{
int inches = 0;
while (*s != '\0')
{
inches++;
s++;
}
return (inches);
}
