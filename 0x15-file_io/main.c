#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *let;
	size_t red;

	if (filename == NULL)
		return (0);

	fd = open("filename", O_RDONLY);
	if (fd == -1)
		return (0);

	read(fd, let, letters);
	if (fd == -1)
		return (0);

	write(STDIN_FILENO, let, red);
	if (STDIN_FILENO == -1 || red != letters)
		return (0);
}

int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
