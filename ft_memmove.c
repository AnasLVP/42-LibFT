/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouyaz <aabouyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:19:50 by aabouyaz          #+#    #+#             */
/*   Updated: 2025/04/24 15:01:09 by aabouyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned long n);
void	*ft_memmove(void *dest, const void *src, unsigned long n);

void	*ft_memmove(void *dest, const void *src, unsigned long n)
{
	if (src > dest)
		ft_memcpy(dest, src, n);
	else
	{
		while (n > 0)
		{
			((char *)dest)[n] = ((char *)src)[n];
			n--;
		}
	}
	return (dest);
}
