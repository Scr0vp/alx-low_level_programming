#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(const char *file);
void close_file(int fd);
void copy_files(const char *file_from, const char *file_to);

/**
 * create_buffer - Allocates memory for buffer.
 * @file: File name.
 * Return: Pointer to buffer.
 */
char *create_buffer(const char *file)
{
char *buf = malloc(1024);
if (!buf)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (buf);
}

/**
 * close_file - Closes file descriptor.
 * @fd: File descriptor.
 */
void close_file(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * copy_files - Copies contents of file_from to file_to.
 * @file_from: Source file.
 * @file_to: Destination file.
 */
void copy_files(const char *file_from, const char *file_to)
{
int from, to;
char *buf;
ssize_t r, w;

from = open(file_from, O_RDONLY);
if (from == -1)
{
perror(file_from);
exit(98);
}

to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (to == -1)
{
perror(file_to);
exit(99);
}

buf = create_buffer(file_from);
while ((r = read(from, buf, 1024)) > 0)
{
w = write(to, buf, r);
if (w == -1)
{
perror(file_to);
exit(99);
}
}

close_file(from);
close_file(to);
free(buf);
}

/**
 * main - Entry point.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, other on error.
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
copy_files(argv[1], argv[2]);
return (0);
}

