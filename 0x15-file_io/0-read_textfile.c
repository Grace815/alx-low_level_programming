#include "main.h"
#include <stdlib.h>

/**
 * Read a text file and output it to STDOUT using read_textfile.
 * @filename: reading a text file
 * @letters: number of letters to be read in the project
 * Return: w- actual number of bytes read and printed in the project
 *        0 when function fails or filename is NULL in the project
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
