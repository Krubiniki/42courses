// header 42

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z' )
		c = c - 'A' + 'a';
	return (c);
}