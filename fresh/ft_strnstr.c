//header 42

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;
	int k;

	i = 0;
	if (len <= 0)
		return (NULL);
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && len > 0)
	{
		j = 0;
		k = i;
		while (haystack[i] == needle [j] && len > 0)
		{
			i++;	
			j++;
			len--;
			if (needle[j] == '\0')
				return ((char *)haystack + k);
		}
		i++;
		len--;
	}
	return (NULL);
}
