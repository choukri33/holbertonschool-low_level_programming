#include <stdio.h>
/**
 *main - prints all single digits from 0 to 9
 *followed by a new line
 * Return: 0
 */
int main(void)
{
	int numbers = 0;

	while (numbers <= 9)
	{
		printf("%d", numbers);
		numbers++;
	}

	printf("\n");
	return (0);
}
