#include <stdio.h>
#include "main.h"
/**
* main: Print the number of command line arguments
* @ argc: number of arguments
* @ argv: array of argument strings
*
* Return: returns 0 on success
*/


int main(int argc, char *argv[])
{
if (argc < 2)
{
printf("Usage: %s argument1 [argument2...]\n", argv[0]);
return (1);
}
printf("Number of arguments: %d\n", argc - 1);
for (int i = 1; i < argc; i++)
{
printf("Argument %d: %s\n", i, argv[i]);
}
return (0);
}
