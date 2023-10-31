#include "main.h"
#include <stdio.h>
/**
 * _strlen - Function that returns the length of a string
 *
 * @s: this is the input string
 *
 * Return: Lenngth of the string
 */

	int _strlen(char *s)
	{
		int length = 0;

		while (s[length] != '\0')
		{
			length++;
		}
		return (length);
}
