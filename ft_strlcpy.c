/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouyaz <aabouyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:36:39 by aabouyaz          #+#    #+#             */
/*   Updated: 2025/04/24 13:48:26 by aabouyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlen(const char *s);

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long siz);

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long siz)
{
	unsigned long	i;

	i = 0;
	if (siz == 0)
		return (ft_strlen(src));
	while (i < siz - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[siz] = '\0';
	return (ft_strlen(src));
}
