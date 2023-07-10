main.h:
  the project header file.

0-read_textfile.c:
  function that reads a text file and prints it to the POSIX standard output.
  - Prototype: ssize_t read_textfile(const char *filename, size_t letters);

1-create_file.c:
  function that creates a file.
  - Prototype: int create_file(const char *filename, char *text_content);

2-append_text_to_file.c:
  function that appends text at the end of a file.
  - Prototype: int append_text_to_file(const char *filename, char *text_content);

3-cp.c:
  program that copies the content of a file to another file.
  - Usage: cp file_from file_to

100-elf_header.c:
  program that displays the information contained in the ELF header at the start of an ELF file.
  - Usage: elf_header elf_filename
