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
	FILE *ptr;

	ptr = fopen(filename, "a");
	if (!ptr)
		return (-1);
	if (!fputs(text_content, ptr))
		return (-1);
	fclose(ptr);
	return (1);
}
