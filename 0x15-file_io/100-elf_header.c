#include "main.h"

/**
 * print_error - prints error message to stderr and exits
 * @msg: error message
 * Return: void
 */
void print_error(char *msg, ...)
{
va_list args;

va_start(args, msg);
vdprintf(STDERR_FILENO, msg, args);
va_end(args);
exit(98);
}

/**
 * check_file_args - checks that the correct number of arguments are passed
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: void
 */
void check_file_args(int argc, char *argv[])
{
if (argc != 2)
print_error("Usage: elf_header elf_filename\n");
if (argv[1] == NULL)
print_error("Error: Can't read from file %s\n", argv[1]);
}

/**
 * open_ELF - opens ELF file
 * @file: name of file to be opened
 * Return: file descriptor
 */
int open_ELF(char *file)
{
int fd;

fd = open(file, O_RDONLY);
if (fd == -1)
print_error("Error: Can't read from file %s\n", file);

return (fd);
}

/**
 * read_ELF_header - reads ELF header from the file descriptor
 * @fd: file descriptor
 * Return: pointer to the header struct
 */
Elf64_Ehdr *read_ELF_header(int fd)
{
Elf64_Ehdr *header;
ssize_t r;

header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
print_error("Error: Can't malloc\n");

r = read(fd, header, sizeof(Elf64_Ehdr));
if (r == -1)
print_error("Error: Can't read from file descriptor %d\n", fd);

return (header);
}

/**
 * print_magic - prints the magic numbers
 * @header: pointer to the ELF header struct
 * Return: void
 */
void print_magic(Elf64_Ehdr *header)
{
int i;

printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\n");
}

/**
 * print_class - prints the class of the ELF file
 * @header: pointer to the ELF header struct
 * Return: void
 */
void print_class(Elf64_Ehdr *header)
{
printf("  Class:                             ");
switch (header->e_ident[EI_CLASS])
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
printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
}
}

/**
 * print_data - prints the data encoding of the ELF file
 * @header: pointer to the ELF header struct
 * Return: void
 */
void print_data(Elf64_Ehdr *header)
{
printf("  Data:                              ");
switch (header->e_ident[EI_DATA])
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
printf("<unknown: %x>\n", header->e_ident[EI_DATA]);
}
}

/**
 * print_version - prints the version of the ELF file
 * @header: pointer to the ELF header struct
 * Return: void
 */
void print_version(Elf64_Ehdr *header)
{
printf("  Version:                           %d", header->e_ident[EI_VERSION]);
switch (header->e_ident[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}

/**
 * print_os_abi - prints the OS ABI of the ELF file
 * @header: pointer to the ELF header struct
 * Return: void
 */
void print_os_abi(Elf64_Ehdr *header)
{
printf("  OS/ABI:                            ");
switch (header->e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
}
}

/**
 * print_abi_version - prints the ABI version of the ELF file
 * @h: pointer to the ELF header struct
 * Return: void
 */
void print_abi_version(Elf64_Ehdr *h)
{
printf("  ABI Version:                       %d\n", h->e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the type of the ELF file
 * @header: pointer to the ELF header struct
 * Return: void
 */
void print_type(Elf64_Ehdr *header)
{
printf("  Type:                              ");
switch (header->e_type)
{
case ET_NONE:
printf("NONE (None)\n");
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
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", header->e_type);
}
}

/**
 * print_entry - prints the entry point of the ELF file
 * @header: pointer to the ELF header struct
 * Return: void
 */
void print_entry(Elf64_Ehdr *header)
{
printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * check_elf - checks if file is an ELF file
 * and displays message to stderr
 * @header: pointer to the ELF header struct
 * Return: void
 */
void check_elf(Elf64_Ehdr *header)
{
if (header->e_ident[EI_MAG0] != ELFMAG0 ||
header->e_ident[EI_MAG1] != ELFMAG1 ||
header->e_ident[EI_MAG2] != ELFMAG2 ||
header->e_ident[EI_MAG3] != ELFMAG3)
print_error("Error: Not an ELF file\n");
}

/**
 * main - displays the information contained in the ELF header at the start of
 * an ELF file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr *header;


check_file_args(argc, argv);

fd = open_ELF(argv[1]);
header = read_ELF_header(fd);

check_elf(header);

printf("ELF Header:\n");
print_magic(header);
print_class(header);
print_data(header);
print_version(header);
print_os_abi(header);
print_abi_version(header);
print_type(header);
print_entry(header);

free(header);
close(fd);
return (0);
}
