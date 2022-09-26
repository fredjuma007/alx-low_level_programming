#include "main.h"
/**
 * _memcpy - copies from the source to the dest of the valvue
 * @dest: destination
 * @src: source
 * @n n amount to times
 * Return: return the string value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
