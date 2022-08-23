#include "main.h"

/**
 * read_textfile - function to read and print the contents of a text file
 * to stdout
 * @filename: the filename
 * @letters: the number of letters
 *
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t w, r;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (!buffer || !filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || r == -1)
	{
		free(buffer);
		return (0);
	}

	return (w);
}
