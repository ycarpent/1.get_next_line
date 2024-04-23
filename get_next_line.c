/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarpent <ycarpent@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:27:06 by ycarpent          #+#    #+#             */
/*   Updated: 2024/02/22 13:27:06 by ycarpent         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
    static char		buf[BUFFER_SIZE];
    char			*line;
    int				i;
	
    i = 0;
	line = NULL;// initialiser a NULL pour + de secu
	if (BUFFER_SIZE <= 0 || fd < 0)// Safety check
        return (NULL);
	if (buf)// while buffer not empty
		gnl_buffer_to_line(buf, line, gnl_found_newline(buf));// function buffer_into_line
	if (gnl_found_newline(line))
		return (line);
    while (read(fd, buf, BUFFER_SIZE))// attempt to read
    {
		gnl_buffer_to_line(buf, line, gnl_found_newline(buf));// function buffer_into_line
		if (gnl_found_newline(line))
			return (line);
    }
	if (buf)// while buffer not empty
		gnl_buffer_to_line(buf, line, gnl_found_newline(buf));// function buffer_into_line
    return (line);
}

int	gnl_found_newline(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i++] == '\n')
            return (i);
    }
    return (ft_strlen(str)); // +1 ?
}

char	*gnl_buffer_to_line(char *buf, char *line, int newline)
{
	int		i;
	int		lenline
	char	*newstr;

	i = 0;
	lenline = ft_strlen(line) + 1;
	// est-ce qu'il y a un '\n' ?
	newstr = malloc(sizeof(char) * lenline + newline);// si oui → copy buf until newline into line
	if (!newstr)
		return (NULL); //secu malloc
	ft_strcpy(newstr, line, lenline)// copier line dans new
	free(line);
	line = NULL;// free line + mettre à nul
	ft_strcpy(&newstr[lenline], buf, newline + 1);// vider la partie copiée du buffer
	while (buf[newline])
		buf[i++] = buf[newline++];
	buf[i] = '\0';
				// return line
	return (newstr);
			// si non → copy buffer en entier dans line
}