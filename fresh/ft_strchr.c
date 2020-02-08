//header 42

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (s[0] == '\0')
		return ((char *)s);
	while (*s++)
	{
		if(*s == c)
			return ((char *)s);
	}
	return (NULL);
}
