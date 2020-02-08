//header 42

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int dsize;
	unsigned int ssize;
	unsigned int i;

	dsize = 0;
	while (dst)
		dsize++;
	ssize = 0;
	while (src)
		ssize++;
	if (dsize <= dstsize)
		ssize += dstsize;
	else
		ssize += dsize;
	i = 0;
	while (src[i] != '\0' && dsize + 1 < dstsize)
	{
		dst[dsize] = src[i];
		i++;
		dsize++;
	}
	dst[i] = '\0';
	return (ssize);
}
