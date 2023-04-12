#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Appends text
 * @filename: pointer to file name
 * @text_content: string to add
 * Return: function fails or no permission -1.
 *         else 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openf, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	openf = open(filename, O_WRONLY | O_APPEND);
	w = write(openf, text_content, len);

	if (openf == -1 || w == -1)
		return (-1);

	close(openf);

	return (1);
}
