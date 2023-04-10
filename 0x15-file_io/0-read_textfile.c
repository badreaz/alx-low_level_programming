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
	size_t count, i, end;
	FILE *textfile;
	char *text;

	if (filename == NULL || letters == 0)
		return (0);
	textfile = fopen(filename, "r");
	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL || textfile == 0)
		return (0);

	count = 0;
	end = 1;
	while (count < letters && end)
	{
		for (i = 0; i < letters; i++)
			text[i] = '\0';
		if (!fgets(text, letters, textfile))
			end = 0;
		for (i = 0; text[i] && count < letters; i++, count++)
			write(1, &text[i], 1);
	}
	fclose(textfile);
	return (count);
}
