//42 header

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{

	char	*sub;
	unsigned int	i;

	i = 0;

	if(!(sub = malloc(sizeof(char)*len + 1)))
		return (NULL);

	while (i < len && s[i + start] != '\0')
	{
		sub[i] = s[i + start];
		i++;
	}

	sub[i + 1] = '\0';

	return (sub);
}
