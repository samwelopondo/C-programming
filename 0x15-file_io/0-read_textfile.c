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
