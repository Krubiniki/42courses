// header 42

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char		*p;
	unsigned int	i;
	
	i = 0;
	if (s[i] == '\0')
		return (NULL);
	while (s[i] != '\0')
		i++;
	p = ft_calloc(i,sizeof(char));
	return (ft_memcpy(p,s,i));
}
