#include "main.h"
#include <elf.h>

/**
 * class - get the class of elf file
 * @num: class number.
 */
void class(int num)
{
	if (num == 1)
		printf("ELF32");
}

/**
 * Data - get the data of elf file
 * @num: data number.
 */
void data(int num)
{
	if (num == 1)
		printf("2's complement, little endian");
	else if (num == 2)
		printf("2's complement, big endian");
}

/**
 * version - get the version of elf file
 * @num: version number.
 */
void version(int num)
{
	if (num == 1)
		printf("1 (current)");
}

/**
 * osabi - get OS/ABI of elf file
 * @num: OS/ABI number.
 */
void osabi(int num)
{
	if (num == 0)
		printf(" UNIX - System V");
	else if (num == 2)
		printf("UNIX - NetBSD");
	else if (num == 6)
		printf(" UNIX - Solaris");
}

/**
 * entry - get the entry of elf file
 * @num: entry number.
 */
void entry(unsigned int num)
{
	if (num == ELFCLASS32)
		printf("%#x", num);
	else if (num == ELFCLASS64)
		printf("%#lx", (long unsigned int)num);
}

/**
 * print - print elf file
 * @buffer: pointer to struct.
 */
void print(Elf64_Ehdr *buffer)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
		printf("%02x  ", buffer->e_ident[i]);
	printf("\n  Class:                             ");
	class(buffer->e_ident[EI_CLASS]);
	printf("\n  Data:                              ");
	data(buffer->e_ident[EI_DATA]);
	printf("\n  Version:                           ");
	version(buffer->e_ident[EI_VERSION]);
	printf("\n  OS/ABI:                            ");
	version(buffer->e_ident[EI_OSABI]);
	printf("\n  ABI Version:                       %x",
								buffer->e_ident[EI_ABIVERSION]);
	printf("\n  Type:                              EXEC (Executable file)");
	printf("\n  Entry point address:               ");
	entry(buffer->e_entry);
	printf("\n");
}

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
	int fd;
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
	if (buffer->e_ident[0] != EI_MAG0 && buffer->e_ident[1] != EI_MAG1
	 && buffer->e_ident[2] != EI_MAG2 && buffer->e_ident[3] != EI_MAG3)
		dprintf(2, "Error: Not an ELF file"), exit(98);
	print(buffer);
	if (!close(fd))
		exit(98);
	return (0);
}
