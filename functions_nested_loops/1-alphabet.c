#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - Make the alphabet
 *
 *Return: void
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	_putchar(alphabet);
	alphabet++;
	}
	_putchar('\n');
}
