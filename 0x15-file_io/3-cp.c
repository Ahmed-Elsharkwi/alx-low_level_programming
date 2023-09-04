#include"main.h"
void close_1(int fl, int fu);
/**
 * main - copy text from one file to another
 * @argc: is an int
 * @argv: is a pointer
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int fp, fc, w, t;
	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fc = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	fp = open(argv[1], O_RDONLY);
	if (fp == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	t = read(fp, buffer, 1024);
	w = write(fc, buffer, t);
	if (fc == -1 || w == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close_1(fc, fp);
	return (0);
}
/**
 * close_1 - close function
 * @fl: is an int
 * @fu: is an int
 */
void close_1(int fl, int fu)
{
	int c, m;

	c = close(fl);
	m = close(fu);
	if (c == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d", fl);
		exit(100);
	}
	if (m == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d", fu);
		exit(100);
	}
}
