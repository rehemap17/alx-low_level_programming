#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @p: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int p)

{

	void *ptr;

	ptr = malloc(p);
	if (ptr == NULL)
	exit(98);
	return (ptr);
}

