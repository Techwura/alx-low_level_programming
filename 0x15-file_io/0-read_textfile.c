#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *labai;
	ssize_t lorinda;
	ssize_t vee;
	ssize_t land;

	lorinda = open(filename, O_RDONLY);
	if (lorinda == -1)
		return (0);
	labai = malloc(sizeof(char) * letters);
	land = read(lorinda, labai, letters);
	vee = write(STDOUT_FILENO, labai, land);

	free(labai);
	close(lorinda);
	return vee;
}
