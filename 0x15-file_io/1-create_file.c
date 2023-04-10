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
	int i;
	FILE *ptr;

	ptr = fopen(filename, "w");
	if (!ptr)
		return (-1);

	i = fputs(text_content, ptr);
	if (i > 0)
		return (1);
	fclose(ptr);
	return (-1);
}
