// 42 header

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *aux = s;

	while(n--)
	{
		*aux = '\0';
	}
}
