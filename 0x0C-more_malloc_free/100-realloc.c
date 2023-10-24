#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory block to be reallocated.
 * @old_size: Size of the old memory block in bytes.
 * @new_size: Size of the new memory block in bytes.
 *
 * Return: A pointer to the reallocated memory block.
 *         NULL if malloc fails or if new_size is 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int min_size, i;

	if (new_size == old_size)
	return (ptr);
	if (ptr == NULL)
	return (malloc(new_size));
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	return (NULL);
	old_ptr = ptr;
	min_size = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < min_size; i++)
	new_ptr[i] = old_ptr[i];
	free(ptr);
	return (new_ptr);
}
