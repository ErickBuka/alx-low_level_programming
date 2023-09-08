#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_error(char *msg)
{
    fprintf(stderr, "%s\n", msg);
    exit(98);
}

int main(int argc, char *argv[])
{
	int fd = open(argv[1], O_RDONLY);
	Elf64_Ehdr header;
	ssize_t n = read(fd, &header, sizeof(header));
	int i;
	if (argc != 2)
    {
        print_error("Usage: elf_header elf_filename");
    }

    if (fd == -1)
    {
        print_error("Failed to open file");
    }

    if (n == -1)
    {
        print_error("Failed to read ELF header");
    }

    /* Check if the file is an ELF file */
    if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
    {
        print_error("Not an ELF file");
    }

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", header.e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2MSB ? "big endian" : "little endian");
    printf("  Version:                           %d\n", header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %d\n", header.e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              %d\n", header.e_type);
    printf("  Entry point address:               %lx\n", header.e_entry);
    printf("  Start of program headers:          %lu (bytes into file)\n", header.e_phoff);
    printf("  Start of section headers:          %lu (bytes into file)\n", header.e_shoff);
    printf("  Flags:                             %d\n", header.e_flags);
    printf("  Size of this header:               %d (bytes)\n", header.e_ehsize);
    printf("  Size of program headers:           %d (bytes)\n", header.e_phentsize);
    printf("  Number of program headers:         %d\n", header.e_phnum);
    printf("  Size of section headers:           %d (bytes)\n", header.e_shentsize);
    printf("  Number of section headers:         %d\n", header.e_shnum);
    printf("  Section header string table index: %d\n", header.e_shstrndx);

    close(fd);
    return (0);
}

