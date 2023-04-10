#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of file.
 * @text_content: the content to write in file.
 *
 * Return: 1 if succes, otherwise -1.
 */

int create_file(const char *filename, char *text_content)
{
	int i, file, size;

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	size = 0;
	while (text_content[size])
		size++;
	i =  write(file, text_content, size);

	close(file);
	if (i == -1)
		return (-1);

	return (1);
}
