#include "main.h"

/**
 * main - program that displays the information contained in the ELF header
 *  at the start of an ELF file.
 * @argc: number of gruments.
 * @argv: pointer to arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(2, "Usage: elf_header elf_filename");
		exit(98);
	}
	else if (argv[1])
		*argv[0] = '0';
	return (0);
}
