#include "main.h"


/**
  * read_textfile - reads a text file and prints it to POSIX std output
  * @filename: file to be read
  * @letters:  number of letters it should read and print
  *
  * Return: actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer; /* stores the characters read */
	int fd; /* file descriptor */
	ssize_t read_count; /* stores the read return value */
	ssize_t write_count; /* stores the value to be written */

	if (!filename || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY); /* file opened in read only mode */

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters); /* allocating memory */

	if (!buffer)
	{
		close (fd);
		return (0);
	}
	read_count = read(fd, buffer, letters);
	close (fd);
	if (read_count <= 0)
	{
		free(buffer);
		return (0);
	}
	write_count = write(STDOUT_FILENO, buffer, read_count);
	free (buffer);
	if (write_count < 0)
		return (0);

	return (write_count);
}


