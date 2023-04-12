#include "main.h"
#include <stdlib.h>
#include<unistd.h>

/**
 * read_textfile- print text to STDOUT.
 * @filename: files with text
 * @letters:number of letters to be read count
 * Return: w number of bytes printed
 *        0 when function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufer;
	ssize_t file;
	ssize_t w;
	ssize_t t;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	bufer = malloc(sizeof(char) * letters);
	t = read(file, bufer, letters);
	w = write(STDOUT_FILENO, bufer, t);

	free(bufer);
	close(file);
	return (w);
}
