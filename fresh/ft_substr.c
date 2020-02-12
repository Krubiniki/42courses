//42 header

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{

	char *sub;
	sub = (char *)(s + start);
	sub = malloc(sizeof(char)*len);
	return (sub);
}
