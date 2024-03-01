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
#  define BUFFER_SIZE 7
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

int ft_strlen(char *str);
int	ft_strcat(char *dst, char *src);
int	ft_strjoin(char *str1, const char *str2);
int	ft_strcpy(char *dst, const char *src, size_t dstlen);

#endif