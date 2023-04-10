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
	size_t count;
	int textfile, let, i;
	char text[1024];

	if (filename == NULL || letters == 0)
		return (0);
	textfile = open(filename, O_RDONLY);
	if (textfile == -1)
		return (0);

	count = 0;
	let = 1;
	while (count < letters && let != 0)
	{
		let = read(textfile, text, letters - count);
		count += let;
		i = write(1, text, let);
		if (let == -1 || i == -1 || i != let)
		{
			close(textfile);
			return (0);
		}
	}
	close(textfile);
	return (count);
}
