#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, unsigned long n);

int	main(void)
{
	char *test = "bon la team, venez on se suicide !!!!";

	printf("%d\n", ft_memcmp("sa", "as", 0));
	printf("%d\n", memcmp("sa", "as", 0));
}