#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments
 *
 * @argc: int of arguments
 * @argv: array of arguments
 *
 * Return: 1 if the program does'nt receive 2 arguments, otherwise 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
	printf("Erreur\n");
	return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
