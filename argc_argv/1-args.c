#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: int of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
