#include"main.h"
/**
 * create_file - creat a file and put a string inside it
 * @filename: the name of the file
 * @text_content: the content of which will be written in the file
 * Return: 0 (sucess)
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int w;
	int len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0 ; text_content[len]; )
			len++;
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fp, text_content, len);
	if (fp == -1 || w == -1)
		return (-1);
	close(fp);
	return (1);
}
