// header 42

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char  *ptr;

	ptr = malloc(count*size);
	ft_memset(ptr, '\0', size);
	return ((void *)ptr);
}
