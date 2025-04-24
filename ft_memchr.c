/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouyaz <aabouyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:26:57 by aabouyaz          #+#    #+#             */
/*   Updated: 2025/04/24 20:57:33 by aabouyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned long n);

void	*ft_memchr(const void *s, int c, unsigned long n)
{
	unsigned long	i;
	unsigned char	l;
	unsigned char	*res;

	i = 0;
	res = ((unsigned char *)s);
	l = ((unsigned char)c);
	while (i < n)
	{
		if (res[i] == l)
			return (&res[i]);
		i++;
	}
	return (0);
}
