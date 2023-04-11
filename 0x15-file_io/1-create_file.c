#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#include "main.h"
/**
 * create_file - creates a file and writes text content to it
 * @filename: name of file to create
 * @text_content: content to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, w;

	/* return -1 if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* create the file with rw------- permissions */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	/* return -1 if opening file fails */
	if (fd == -1)
		return (-1);

	/* if text_content is not NULL, write to file */
	if (text_content != NULL)
	{
		/* get length of text_content */
		for (len = 0; text_content[len] != '\0'; len++)
			;

		/* write text_content to file */
		w = write(fd, text_content, len);
		/* return -1 if write fails */
		if (w == -1)
			return (-1);
	}

	/* close file descriptor */
	close(fd);

	/* return 1 on success */
	return (1);
}
