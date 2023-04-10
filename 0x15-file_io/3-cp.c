#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments.
 * @argv: pointer to arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int from, to;
	char buffer[1024];
	int i, j;
	mode_t mod = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mod);
	i = 1;
	while (i)
	{
		i = read(from, buffer, 1024);
		if (i == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		j = write(to, buffer, i);
		if (j == -1 || j != i)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", from), exit(100);

	if (close(to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", to), exit(100);

	return (0);
}
