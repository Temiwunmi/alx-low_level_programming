#include "main.h"
#include <string.h>

/**
 * _memcpy - memory copy
 * @dest: destination
 * @src: source
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
