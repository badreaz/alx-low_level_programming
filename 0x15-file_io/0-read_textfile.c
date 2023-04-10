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
	char text[1024];

	if (filename == NULL || letters == 0)
		return (0);
	textfile = fopen(filename, "r");
	if (textfile == NULL)
		return (0);

	count = 0;
	end = 1;
	while (count < letters && end)
	{
		for (i = 0; i < 1024; i++)
			text[i] = '\0';
		if (!fgets(text, 1024, textfile))
			end = 0;
		for (i = 0; text[i] && count < letters; i++, count++)
			write(1, &text[i], 1);
	}
	if (count < letters)
		return (0);
	fclose(textfile);
	return (count);
}
