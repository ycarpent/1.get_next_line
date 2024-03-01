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


typedef struct s_list
{
    char            *str_buf;
    struct s_list    *next;
}                       t_list;

#endif