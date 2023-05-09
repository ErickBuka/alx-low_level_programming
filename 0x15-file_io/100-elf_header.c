#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * main - displays information contained in the ELF header of an ELF file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on failure
 */

void print_magic(unsigned char *e_ident)
{
	printf("Magic: ");
	for i = ( 0; i < EI_NIDENT; i++);
	{
		printf("%02x ", e_ident[i]);
	}
	printf("\n");
}
/**
 * print_class - prints the ELF file class (32-bit or 64-bit)
 * @e_ident: the ELF header identification bytes
 */
void print_class(unsigned char e_ident[EI_NIDENT])
{
	printf("Class: ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * print_data - prints the ELF data encoding (little-endian or big-endian)
 * @e_ident: the ELF header identification bytes
 */
void print_data(unsigned char e_ident[EI_NIDENT])
{
	printf("Data: ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}
/**
 * print_version - prints the ELF version
 * @e_ident: the ELF header identification bytes
 */
void print_version(unsigned char e_ident[EI_NIDENT])
{
	printf("  Version: %d", e_ident[EI_VERSION]);
	if (e_ident[EI_VERSION] == EV_CURRENT)
	{
		printf(" (current)\n");
	}
	else
	{
		printf("\n");
	}
}
/**
 * print_osabi - prints the ELF operating system/ABI
 * @e_ident: the ELF header identification bytes
 */
void print_osabi(unsigned char e_ident[EI_NIDENT])
{
	printf("OS/ABI: ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("Compaq TRU64 UNIX\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone (embedded) application\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

void print_abiversion(unsigned char e_ident[EI_NIDENT])
{
	printf("  ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}

void print_type(Elf32_Half e_type)
{
	printf("Type: ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (No file type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
	}
}
