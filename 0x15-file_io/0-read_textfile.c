#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to text in a file
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t lread, fopened, fread, fwrite;
	char *fsize;

	fsize = malloc((letters) * sizeof(char));
	if (!filename || !fsize)
		return (0);
	fopened = open(filename, O_RDONLY);
	if (!fopened)
		return (0);
	fread = read(fopened, fsize, letters);
	if (!fread)
		return (0);
	fwrite = write(STDOUT_FILENO, fsize, fread);
	if (!fwrite)
		return (0);
	close(fopened);
	free(fsize);
	return (fwrite);
}
