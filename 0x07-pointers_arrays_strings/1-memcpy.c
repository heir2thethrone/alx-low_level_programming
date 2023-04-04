#include "main.h"
/**
 * _memcpy - a function that copies memory area,
 * @dest: memory where is saved.
 * @src: memory where is copied.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
