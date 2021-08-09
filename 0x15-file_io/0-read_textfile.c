#include "main.h"

/**
 * read_textfile -function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: pointer
 * @letters: is the number of letters it should read and print
 *
 * Return: the actula number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read;
	char *buf;
	int fd;

	if (filename == NULL)
		return (0);
	buf = malloc(letters * sizeof(char));
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes_read = read(fd, buf, letters);
	bytes_read = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_read == -1)
		return (0);
	close(fd);

	return (bytes_read);
}
