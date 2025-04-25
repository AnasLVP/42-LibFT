/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouyaz <aabouyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:03:12 by aabouyaz          #+#    #+#             */
/*   Updated: 2025/04/25 13:49:01 by aabouyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned long n);
int	ft_isascii(int c);

int	ft_strncmp(const char *s1, const char *s2, unsigned long n)
{
	unsigned long	i;
	unsigned char	a;
	unsigned char	b;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < n - 1)
		i++;
	a = (unsigned char)s1[i];
	b = (unsigned char)s2[i];
	return (a - b);
}
