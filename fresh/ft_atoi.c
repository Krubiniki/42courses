//header 42

#include "libft.h"

int	ft_atoi(const char *str)
{
	int neg;
	int i;
	int res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t' 
		|| str[i] == '\v'  || str[i] == '-' || str[i] == '+')
		i++;
	
	if (str[i] == '-')
	{
		neg = neg * -1;
		i++;
	}
		
	while ((str[i] >= '0' && str[i] <= '9') || str[i] != '\0')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * neg);
}
