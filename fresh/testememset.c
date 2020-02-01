#include <string.h>
#include <stdio.h>
#include "libft.h"



int main (void)
{
	char text[10] = "Olar.Olei.";
	char text2[10] = "Ileh.Uloh.";
	ft_memset(text+1,50,5);
	printf("%s\n",text);
	memset(text2,50,5);
	printf("%s\n",text2);
}
