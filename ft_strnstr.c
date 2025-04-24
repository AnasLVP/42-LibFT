/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouyaz <aabouyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:43:27 by aabouyaz          #+#    #+#             */
/*   Updated: 2025/04/24 16:53:01 by aabouyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, unsigned long len);

char	*ft_strnstr(const char *big, const char *little, unsigned long len)
{
	unsigned long	i;
	unsigned long	j;
	char			*s;

	i = 0;
	j = 0;
	s = (char *)big;
	while (s[i] && i < len)
	{
		if (little[j] == s[i])
		{
			while (little[j] == s[i + j] && (i + j) < len)
				j++;
		}
		if (little[j] == '\0')
			return (&s[i]);
		j = 0;
		i++;
	}
	return (0);
}
