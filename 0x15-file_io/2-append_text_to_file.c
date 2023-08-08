#include"main.h"
/**
 * append_text_to_file - append text to the file
 * @filename: is a pointer
 * @text_content: is a pointer
 * Return: 0 (success)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, w;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	if (access("my_file.txt", F_OK))
	{
		fp = open(filename, O_WRONLY | O_APPEND);
		w = write(fp, text_content, strlen(text_content));
		if (fp == -1 || w == -1)
			return (-1);
		close(fp);
		return (1);
	}
	return (-1);
}
