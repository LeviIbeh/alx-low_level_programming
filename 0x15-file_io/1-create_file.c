#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: location pointer of filename
 * @text_content: string to be written to file
 * Return: conditional value of function
 */
int create_file(const char *filename, char *text_content)
{
	int fn, len = 0;
	long int writer;

	if (filename == NULL)
		return (-1);
	fn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fn == -1)
		return (-1);
	if (text_content != NULL)
	{

		while (text_content[len])
			len++;
		writer = write(fn, text_content, len);
		if (writer == -1)
			return (-1);
	}
	if (close(fn) == -1)
		return (-1);
	return (1);
}
