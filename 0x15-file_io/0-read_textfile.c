#include "main.h"
/**
 * read_textfile - read the file and print the text to standrad output
 * @filename: is a pointer
 * @letters: is the number of letters
 * Return: 0 (success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char c;
	size_t count = 0;
	FILE *fp = fopen(filename, "r");

	if (fp == NULL || filename == NULL)
		return (0);
	for (c = fgetc(fp) ; (c != EOF) && (count < letters) ; c = fgetc(fp))
	{
		if ((c != '\n') || (c != ' '))
			count++;
		fprintf(stdout, "%c", c);
	}
	fclose(fp);
	return (count);
}
