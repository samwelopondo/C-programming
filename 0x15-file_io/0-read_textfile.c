/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * @letters: size letters
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *let;
	size_t red, w;

	if (filename == NULL)
		return (0);

	fd = open("filename", O_RDONLY);
	if (fd == -1)
		return (0);

	read(fd, let, letters);
	if (fd == -1)
		return (0);

	w = write(STDIN_FILENO, let, red);
	if (STDIN_FILENO == -1 || red != letters)
		return (0);
	close(fd);
	return (w);
}
