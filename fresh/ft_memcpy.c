//header 42

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *pd;
	const unsigned char *ps;

	pd = dst;
	ps = src;

	while (n--)
		*pd++ = *ps++;

	return(dst);
}
