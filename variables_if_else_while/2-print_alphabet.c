#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 *  * main - prints the alphabet
 *   * Return: 0
 *    */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
