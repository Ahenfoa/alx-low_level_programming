#include <stdio.h>
#include "main.h"

/**
* main - prints the name of the program
* @argc: number of command line arguments
* @argv: array of command line arguments
*
* Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
