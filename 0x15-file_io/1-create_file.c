#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates file
 * @filename: var point
 * @text_content: text content
 * Description: function that creates file
 * Return: 1 success, -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	return (1);
}
