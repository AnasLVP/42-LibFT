/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouyaz <aabouyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:44:47 by aabouyaz          #+#    #+#             */
/*   Updated: 2025/04/24 15:30:09 by aabouyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	unsigned long	i;
	char			*res;

	i = 0;
	res = (char *)s;
	while (res[i])
	{
		if (res[i] == c)
			return (&res[i]);
		i++;
	}
	return (0);
}
