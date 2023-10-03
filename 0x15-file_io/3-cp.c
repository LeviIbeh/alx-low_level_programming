#include "main.h"
/**
 * main - program to copy
 * @ac: arguments counted
 * @av: argument varied array
 * Return: conditional value of outcome
 */
int main(int ac, char **av)
{
	int fnFrum, fnToo, writer, reads;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fnFrum = open(av[1], O_RDONLY);
	if (fnFrum == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fnToo = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fnToo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((reads = read(fnFrum, buff, 1024)) > 0)
	{
		writer = write(fnToo, buff, reads);
		if (writer == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (reads == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(fnFrum) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fnFrum);
		exit(100);
	}
	if (close(fnToo) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fnToo);
		exit(100);
	}
	return (0);
}
