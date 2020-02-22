//header 42

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *ps;
	
	if (s[0] == '\0' || s[0] == c)
		return ((char *)s);
	while (*s++)
	{
		if (*s == c)
			ps = s;
	}
	return ((char *)ps);
}
