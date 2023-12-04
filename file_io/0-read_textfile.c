#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{	
	ssize_t fd, r, w;

	char *buf;

		buf = malloc(sizeof(char) * letters);

		if (buf == NULL)
		{
			return (0);
		}

	fd = open(filename, O_RDONLY);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if(fd == -1 || r == -1 || w == -1)
	{
		return (0);
	}

	return (w);

}
