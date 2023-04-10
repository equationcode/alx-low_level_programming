#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints
 * it to the standard output.
 * @filename: the text file that is read
 * @letters: the number of letters to be read
 *
 * Return: the actual number of letters it could read and print w,
 * or 0 if the file can not be opened or read, or 0 when
 * filensme is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t t;
	ssize_t w;

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
