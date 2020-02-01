//header 42

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int 		i;
	unsigned char	buffer[len];

	i = 0;
	while (len--)
	{
		buffer[i] = (unsigned char *)src++;
		i++;
	}
	i = 0;
	while (len--)
	{
		(unsigned char *)dst++ = buffer[i];
		i++;
	}
	return(dst);
}

int main(void)
{
	char test1[8] = "mathews";
	char test2[6] = "krubi";

	char test3[6] = "thais";
	char test4[7] = "castro";

	(char *) ft_memmove(test1,test2,5);
	(char *) memmove(test3,test4,5);
	
	printf("%s\n",test1);
	printf("%s\n",test3);	
}
