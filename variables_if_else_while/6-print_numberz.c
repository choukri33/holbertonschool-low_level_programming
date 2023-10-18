#include <stdio.h>
/**
 *main - prints all single digits from 0 to 9
 *followed by a new line
 *Return: 0
 */
int main(void)
{
	int numberz = '0';

	while (numberz <= '9')
	{
	putchar(numberz);
	numberz++;
	}
	putchar('\n');
	return (0);
}
