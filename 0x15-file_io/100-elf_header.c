#include "main.h"
#include <elf.h>

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
	int fd, i;
	Elf64_Ehdr *buffer;

	if (argc != 2)
	{
		dprintf(2, "Usage: elf_header elf_filename");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	buffer = malloc(sizeof(Elf64_Ehdr));
	if (read(fd, buffer, sizeof(Elf64_Ehdr)) == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
		printf("%02x  ", buffer->e_ident[i]);
	printf("\n  Class:                             %x",
								buffer->e_ident[EI_CLASS]);
	printf("\n  Data:                              %x",
								buffer->e_ident[EI_DATA]);
	printf("\n  Version:                           %x",
								buffer->e_ident[EI_VERSION]);
	printf("\n  OS/ABI:                            %x",
								buffer->e_ident[EI_OSABI]);
	printf("\n  ABI Version:                       %x",
								buffer->e_ident[EI_ABIVERSION]);
	printf("\n  Type:                              %x", buffer->e_type);
	printf("\n  Entry point address:               %lx\n", buffer->e_entry);
	close(fd);
	return (0);
}
