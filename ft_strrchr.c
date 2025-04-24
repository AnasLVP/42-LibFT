/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouyaz <aabouyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:56:05 by aabouyaz          #+#    #+#             */
/*   Updated: 2025/04/24 21:18:03 by aabouyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlen(const char *s);
char			*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	unsigned long	i;
	char			*res;

	i = ft_strlen(s);
	res = (char *)s;
	while (i > 0)
	{
		if (res[i] == c)
			return (&res[i]);
		i--;
	}
	return (0);
}
