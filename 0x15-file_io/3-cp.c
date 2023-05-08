#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * check97 - checks for the correct number of arguments
 * @argc: number of arguments
 *
 * Return: void
 */
void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check98 - checks that file_from exists and can be read
 * @file: file_from name
 * @fd_from: file descriptor of file_from, or -1
 *
 * Return: void
 */
void check98(char *file, int fd_from)
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
}

/**
 * check99 - checks that file_to was created and/or can be written to
 * @file: file_to name
 * @fd_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check99(char *file, int fd_to)
{
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
}

/**
 * check100 - checks that file descriptors were closed properly
 * @check: checks if true or false
 * @fd: file descriptor
 *
 * Return: void
 */
void check100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	check97(argc);
	fd_from = open(argv[1], O_RDONLY);
	check98(argv[1], fd_from);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check99(argv[2], fd_to);
	lenr = read(fd_from, buffer, 1024);
	while (lenr > 0)
	{
		lenw = write(fd_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		check99(argv[2], lenw);
		lenr = read(fd_from, buffer, 1024);
	}
	check98(argv[1], lenr);
	close_to = close(fd_to);
	close_from = close(fd_from);
	check100(close_to, fd_to);
	check100(close_from, fd_from);
	return (0);
}
