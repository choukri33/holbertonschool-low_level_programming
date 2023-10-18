#include <stdio.h>
/**
 *main - prints all single digits from 'a' to 'f'
 *followed by a new line
 *Return: 0
 */
int main(void)
{
	char alphabets = '0';

	while (alphabets <= '9')
	{
		putchar(alphabets);
		alphabets++;
	}
	alphabets = 'a';
	while (alphabets <= 'f')
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');
	return (0);
}
