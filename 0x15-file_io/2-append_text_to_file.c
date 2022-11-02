#include "main.h"


/**
  * append_text_to_file - appends text at the end of a file
  * @filename: name of file 
  * @text_content: string to add to end of file
  *
  * Return: 1 on Success or -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int clen; /* length of the string to write */
	int write_count; /* stores the write return value */

	if (!filename)
		return (-1);
  
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
  {
     for (clen = 0; text_content[clen]; clen++)
       ;
    write_count = write(fd, text_content, clen);

	if (write_count == -1)
		return (-1);

	close(fd);

	return (1);
  }

