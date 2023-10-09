#include "main.h"

/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to memory
 * @old_size: size in byte
 * @new_size: size in byte
 *
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min_size;
	unsigned int i;
	void *new_ptr;

	if (ptr == NULL)
	{
		return (malloc(new_size));

	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}
	min_size = (old_size < new_size) ? old_size : new_size;

	for (i = 0 ; i < min_size ; i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new_ptr);
}
