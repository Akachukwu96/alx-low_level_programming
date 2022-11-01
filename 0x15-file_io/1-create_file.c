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
	int clen, rw_only;

	if (!filename)
		return (-1);
	fd = open(filename,  O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (clen = 0; filename[clen]; clen++)
		;

	rw_only = write(fd, text_content, clen);

	if (rw_only == -1)
		return (-1);

	close(fd);

	return (1);
}
