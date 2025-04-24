#include <bsd/string.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_calloc(unsigned long nmemb, unsigned long size);


int	main(void)
{
	char	*test;

	test = ft_calloc(2147483648, 1);
	free(test);
}