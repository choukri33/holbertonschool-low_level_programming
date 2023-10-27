#include "main.h"
#include <stdio.h>

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			break;
		}
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
