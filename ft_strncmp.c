/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouyaz <aabouyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:03:12 by aabouyaz          #+#    #+#             */
/*   Updated: 2025/04/24 15:30:29 by aabouyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned long n);

int	ft_strncmp(const char *s1, const char *s2, unsigned long n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}
