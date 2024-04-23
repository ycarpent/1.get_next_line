/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarpent <ycarpent@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:26:57 by ycarpent          #+#    #+#             */
/*   Updated: 2024/02/22 13:26:57 by ycarpent         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

int     ft_strlen(char *str);
int	    ft_strcpy(char *dst, const char *src, size_t dstlen);
void	*ft_memchr(const void *s, int c, size_t n);
char	*get_next_line(int fd);
char	*gnl_buffer_to_line(char *buf, char *line, int newline);
int	    gnl_found_newline(char *str);

#endif