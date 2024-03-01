/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarpent <ycarpent@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:23:31 by ycarpent          #+#    #+#             */
/*   Updated: 2024/02/26 15:23:31 by ycarpent         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(void)
{
    int		fd;
    char	*line;
    char	*check;
    int		line_nbr; 

    fd = open(file.txt, O_RDONLY);
    line_nbr = 0;

    while (read(fd, check, BUFFER_SIZE) > 0)
    {
    line = get_next_line(fd);
    printf("Line %i: %s\n", ++line_nbr, line);
    free(line);
    }
    return (0);
}