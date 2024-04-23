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
    static char		buf[BUFFER_SIZE + 1];
	ssize_t			nb_read;
    char			*line;

	line = NULL;
	if (BUFFER_SIZE <= 0 || fd < 0)
        return (NULL);
	if (buf[0])
		line = gnl_buffer_to_line(buf, line, gnl_found_newline(buf));
	if (ft_memchr(line, '\n', ft_strlen(line)))
		return (line);
    while (1)
    {
		nb_read = read(fd, buf, BUFFER_SIZE);
		if (nb_read < 0)
			return (free(line), NULL);
		if (!nb_read)
			return (line);
		buf[nb_read] = '\0';
		line = gnl_buffer_to_line(buf, line, gnl_found_newline(buf));
		if (ft_memchr(line, '\n', ft_strlen(line)))
			return (line);
    }
    return (line);
}

char	*gnl_buffer_to_line(char *buf, char *line, int newline)
{
	int		i;
	int		lenline;
	char	*newstr;

	lenline = ft_strlen(line);
	newstr = malloc(sizeof(char) * (lenline + newline + 1));
	if (!newstr)
		return (NULL);
	ft_strcpy(newstr, line, lenline + 1);
	free(line);
	ft_strcpy(&newstr[lenline], buf, newline + 1);
	i = 0;
	while (buf[newline])
		buf[i++] = buf[newline++];
	buf[i] = '\0';
	return (newstr);
}

int	gnl_found_newline(char *str)
{
    int i;

    i = 0;
    while (str && str[i])
    {
        if (str[i++] == '\n')
            return (i);
    }
    return (ft_strlen(str));
}