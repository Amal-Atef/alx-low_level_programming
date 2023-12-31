#include "main.h"

/**
 * append_text_to_file - Appends text at end of a file.
 * @filename: A pointer to name of A file.
 * @text_content: The string adding to end of the file.
 *
 * Return: -1 If the function fails or filename is NULL.
 * &If file doesn't exist the user lacks write permissions.
 * Otherwise: 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
