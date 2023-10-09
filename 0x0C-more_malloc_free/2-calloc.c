#include "main.h"

/**
 * _calloc - allocates memory to an array using malloc
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int all_size = nmemb * size;
	unsigned int i;
	unsigned char *byte_ptr;
	void *alloc_mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	alloc_mem = malloc(all_size);

	if (alloc_mem == NULL)
	{
		return (NULL);
	}
	byte_ptr = (unsigned char *)alloc_mem;

	for (i = 0 ; i < all_size ; i++)
	{
		byte_ptr[i] = 0;
	}
	return (alloc_mem);
}
