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

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY); /* file opened in read only mode */

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters)); /* allocating memory */

	if (!buffer)
		return (0);

	read_count = read(fd, buffer, letters);
	write_count = write(STDOUT_FILENO, buffer, read_count);
	
	close(fd);
	free(buffer);
	return (write_count);
}

