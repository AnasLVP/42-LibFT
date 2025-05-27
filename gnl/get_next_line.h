/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouyaz <aabouyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:54:38 by aabouyaz          #+#    #+#             */
/*   Updated: 2025/05/27 12:22:19 by aabouyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "../libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
int		bn_pos(char *s);
void	mconcat(char ***s, char *buf, int fd);
void	my_read(int fd, char ***rem, int *res);
void	new_remaining(char ***rem, int fd);
char	*get_result(char *s);
void	freeall_gnl(char ***res, int fd);

#endif
