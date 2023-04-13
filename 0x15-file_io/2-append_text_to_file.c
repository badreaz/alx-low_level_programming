#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file.
 * @text_content: text to append.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, size;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	size = 0;
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	while (text_content[size])
		size++;
	if (write(file, text_content, size) < 1)
		return (-1);

	close(file);
	return (1);
}
