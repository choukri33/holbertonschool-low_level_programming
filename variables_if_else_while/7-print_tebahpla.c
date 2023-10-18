#include <stdio.h>
/**
 *main - prints all single digits from 'z' to 'a'
 *followed by a new line
 *Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c <= 'a')
	{
	c--;
	putchar(c);
	}

	putchar('\n');
	return (0);
}
