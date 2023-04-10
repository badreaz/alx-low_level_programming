#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 *  the POSIX standard output.
 * @filename: file to read.
 * @letters: number of characters to read.
 *
 * Return: number of characters printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t textfile, let;
	char *text;

	if (filename == NULL || letters == 0)
		return (0);
	textfile = open(filename, O_RDONLY);
	if (textfile == -1)
		return (0);
	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);

	let = read(textfile, text, letters);
	write(1, text, let);

	free(text);
	close(textfile);
	return (let);
}
