#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#define ERR_MSG "Error"

int _putchar(char p);
void *malloc_checked(unsigned int p);
char *string_nconcat(char *s1, char *s2, unsigned int p);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif


