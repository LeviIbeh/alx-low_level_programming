#include "main.h"
/**
 * read_textfile - reads and prints a textfile
 * @filename: read file
 * @letters: bytes of letters read
 * Return: exact bytes processed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fn;
	ssize_t writer;
	ssize_t display;

	fn = open(filename, O_RDONLY);
	if (fn == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	display = read(fn, buff, letters);
	writer = write(STDOUT_FILENO, buff, display);

	free(buff);
	close(fn);
	return (writer);
}
