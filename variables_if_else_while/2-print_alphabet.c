#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - prints the alphabet
*Return: 0
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{putchar(alphabet); }
	putchar('\n');
	return (0);
}
