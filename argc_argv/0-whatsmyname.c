#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the name of the program
 *
 * @argc: int of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
