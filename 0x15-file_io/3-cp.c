#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int lorinda);

/**
 * creates_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *creates_buffer(char *file)
{
	char *quick;

	quick = malloc(sizeof(char) * 1024);

	if (quick == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (quick);
}

/**
 * close_file - Closes file descriptors.
 * @lorinda: The file descriptor to be closed.
 */
void close_file(int lorinda)
{
	int blow;

	blow = close(fd);

	if (blow == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close lorinda %d\n", lorinda);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int start, end, fee, vee;
	char *quick;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	quick = create_buffer(argv[2]);
	start = open(argv[1], O_RDONLY);
	fee = read(from, buffer, 1024);
	end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (start == -1 || fee == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(quick);
			exit(98);
		}

		vee = write(end, quick, fee);
		if (end == -1 || vee == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(quick);
			exit(99);
		}

		fee = read(start, quick, 1024);
		end = open(argv[2], O_WRONLY | O_APPEND);

	} while (fee > 0);

	free(quick);
	close_file(start);
	close_file(end);

	return (0);
}
