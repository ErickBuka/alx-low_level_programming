#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 if an error
 *	occurs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;        /* buffer to hold the contents of the file */
	int fd;              /* file descriptor */
	ssize_t bytes_read;  /* number of bytes read from the file */
	ssize_t bytes_written; /* number of bytes written to standard output */

		if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(letters * sizeof(char));/* Allocate memory for the buffer */
	if (buffer == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY); /* Open the file in read-only mode */
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	/* Read up to `letters` bytes from the file into the buffer */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* Write the contents of the buffer to standard output */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer); /* Free the buffer and close the file descriptor */
	close(fd);
	return (bytes_read); /* Return the number of bytes read from the file */
}
