#include <stdio.h>
/**
 *main - prints all single digits from '0' to '9' with ","
 *followed by a new line
 *Return: 0
 */
int main(void)
{
	int digits = 0;

	while (digits < 10)
	{
		putchar('0' + digits);
		if (digits < 9)
		{
		putchar(',');
		putchar(' ');
		}

		digits++;
	}
	putchar ('\n');
	return (0);
}
