// header 42

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	
	i = 0;
	if (n <= 0)
		return (0);
	while (s1[i] == s2[i] && n > 0 && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
		n--;
	}
	if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	if (s2[i] > s1[i])
		return (s1[i] - s2[i]);
	return (0);
}
