#ifndef MAIN_H
#define MAIN_H
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/* Function prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);

#endif
