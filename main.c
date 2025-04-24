#include <bsd/string.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int			ft_atoi(const char *nptr);


int	main(int ac, char **av)
{

	(void) ac;
	
	printf("%d\n", atoi(av[1]));
	printf("%d\n", ft_atoi(av[1]));
}