// header 42

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char  *ptr;

	if (!(ptr = (char *)malloc((sizeof(char)*count*size) + 1)))
		return (NULL);
	ft_memset(ptr, '\0', size);
	return ((void *)ptr);
}
