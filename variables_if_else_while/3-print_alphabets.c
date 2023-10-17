#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - prints the alphabet in lowercase and
 * in upper case
 * Return: 0
*/
int main(void)
{
char lettre;

	for (lettre = 'a' ; lettre <= 'z'; lettre++)
		{putchar(lettre); }
		putchar('\n');
	for (lettre = 'A' ; lettre <= 'Z'; lettre++)
		{putchar(lettre); }
		putchar('\n');
	return (0);
}
