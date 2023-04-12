#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buf;

	if (filename == NULL)
	return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
	free(buf);
	return (0);
	}

	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	{
	free(buf);
	close(fd);
	return (0);
	}

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
	free(buf);
	close(fd);
	return (0);
	}

	free(buf);
	close(fd);

	return (bytes_written);
}
