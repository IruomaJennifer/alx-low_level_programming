#include <stdio.h>

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
	int fd, w = 1, i = 0;
	ssize_t printed = 0;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (!buffer || !filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	while (w && printed < letters)
	{
		w = read(fd, (buffer + printed), 1);
		printed++;
	}

	close(fd);

	w = write(STDOUT_FILENO, buffer, printed);
	if (!w)
		return (0);
	free(buffer);

	return (w);
}
