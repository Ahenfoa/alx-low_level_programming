#include <stdio.h>
#include "main.h"
/**
* main: Print the number of cl arguments passed to the program
* @ argc: number of arguments
* @ argv: array of argument
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

for (int i = i < argc; i++)
{
	printf("Argument %d: %s\n", i, argv[i]);
}
return (0);


}
