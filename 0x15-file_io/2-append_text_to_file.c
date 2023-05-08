#include "main.h"

/**
 * _strlen - finds the length of a null-terminated string
 *
 * @str: a pointer to the string
 *
 * Return: the length of the string
 */
size_t _strlen(char *str)
{
	size_t length;

	for (length = 0; str[length] != '\0'; length++)
		;
	return (length);
}

/**
 * append_text_to_file - appends a null-terminated string to the end of a file.
 *
 * @filename: a pointer to a string containing the name
 *  of the file to append to
 * @text_content: a pointer to a string containing the content to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
		bytes_written = write(file_descriptor, text_content, _strlen(text_content));

	close(file_descriptor);

	if (bytes_written == -1)
		return (-1);

	return (1);
}
