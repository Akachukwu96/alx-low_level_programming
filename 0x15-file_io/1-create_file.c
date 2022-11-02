#include "main.h"


/**
  * create_file - creates file
  * @filename: name of the file
  * @text_content: string to write to the file
  * Return: 1 on Sucess or -1 on failure.
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int clen; /* length of the string to write */
	int write_count; /* value of cou written */

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (clen = 0; text_content[clen]; clen++)
		;
	write_count = write(fd, text_content, clen);

	if (write_count == -1)
		return (-1);

	close(fd);

	return (1);
}
