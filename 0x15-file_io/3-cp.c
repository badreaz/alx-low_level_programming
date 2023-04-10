#include "main.h"

/**main - copies the content of a file to another file
 * @argc: number of arguments.
 * @argv: pointer to arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	FILE *ptr_from, *ptr_to;
	char buffer[1024];
	int i;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ptr_from = fopen(argv[1], "r");
	if (!ptr_from)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	ptr_to = fopen(argv[2], "W");
	while (fgets(buffer, 1024, ptr_from))
	{
		for (i = 0; i < 1024; i++)
			buffer[i] = '\0';
		if (!fputs(buffer, ptr_to))
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (!fclose(ptr_from) || !fclose(ptr_to))
	{
		dprintf(2, "Error: Can't close fd %d\n", 2);
		exit(100);
	}
	return (0);
}
