#include "shell.h"
<<<<<<< HEAD

/**
 **_memset - fills memory with a constant byte
 *@s: the pointer to the memory area
 *@b: the byte to fill *s with
 *@n: the amount of bytes to be filled
 *Return: (s) a pointer to the memory area s
=======
/**
 * _memset - fills memory with a constant byte
 * @s: the pointer to the memory area
 * @b: the byte to fill *s with
 * @n: the amount of bytes to be filled
 * Return: (s) a pointer to the memory area s
>>>>>>> 5f2099b0a08cda0df29260d8b4870b53c9623efd
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
<<<<<<< HEAD

=======
>>>>>>> 5f2099b0a08cda0df29260d8b4870b53c9623efd
/**
 * ffree - frees a string of strings
 * @pp: string of strings
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}
<<<<<<< HEAD

=======
>>>>>>> 5f2099b0a08cda0df29260d8b4870b53c9623efd
/**
 * _realloc - reallocates a block of memory
 * @ptr: pointer to previous malloc'ated block
 * @old_size: byte size of previous block
 * @new_size: byte size of new block
 *
 * Return: pointer to da ol'block nameen.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
<<<<<<< HEAD
=======

>>>>>>> 5f2099b0a08cda0df29260d8b4870b53c9623efd
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);
<<<<<<< HEAD

	p = malloc(new_size);
	if (!p)
		return (NULL);

=======
	p = malloc(new_size);
	if (!p)
		return (NULL);
>>>>>>> 5f2099b0a08cda0df29260d8b4870b53c9623efd
	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
