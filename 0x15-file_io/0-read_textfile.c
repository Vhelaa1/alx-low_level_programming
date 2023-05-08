/*
 * File: 0-read_textfile.c
 */
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads the content of a text file and
 * prints it to POSIX stdout.
 * @filename: A pointer to the name of the file to be read.
 * @letters: the maximum number of letters that the function
 * can read and print.function should read and print.
 *
 * Return: If the function fails to read the file or filename is NULL - 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
