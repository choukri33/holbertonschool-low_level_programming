#include "main.h"

/**
 *_islower - Entry point,checks for lowercase
 *character
 *@c: character to check
 *
 *Return: 1 if c is lowercase else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}

	else
	{
	return (0);
	}


}