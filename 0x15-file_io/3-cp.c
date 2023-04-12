#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

void copy_file(char *file_from, char *file_to);

/**
 * copy_file - Copies the contents of a file to another file.
 * @file_from: The name of the file to be copied.
 * @file_to: The name of the destination file.
 *
 * Description: If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
void copy_file(char *file_from, char *file_to)
{
	int from, to, r, w;
	char buffer[BUFFER_SIZE];

	from = open(file_from, O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while ((r = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}

	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
}

/**
 * main - Entry point.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 97 on incorrect argument count.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
