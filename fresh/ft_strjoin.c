// headr 42

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*join;
	char		*p1;
	char		*p2;
	unsigned int	s1len;
	unsigned int	s2len;
	
	p1 = (char *)s1;
	p2 = (char *)s2;
	s1len = 0;
	s2len = 0;
	while (p1[s1len] != '\0')
		s1len++;
	while (p2[s2len] != '\0')
		s2len++;
	join = malloc(sizeof(char) * (s1len + s2len));
	while (s1len--)
		*join++ = *p1++;
	while (s2len--)
		*join++ = *p2++;
	return (join);
}
