#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- print read text file in STDOUT.
 * @filename: read text file
 * @letters: read the number of the letters
 * Return: w- read and print actual number of bytes
 *        0 when function fails or filename is NULL.
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
