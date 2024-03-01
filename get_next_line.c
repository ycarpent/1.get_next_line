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
    char			*buf;
    char			*line;
	static char		*stash;
	//prolly unnecessary 
    //int				fd;
    int				i;
	
	//Safety check
    i = 0;
    if (BUFFER_SIZE <= 0 || fd <= 0 || open(file.txt) < 0)
        return (NULL);
	//check if there are some chars in buffer
	if (buf)
		//copy all char after \n into line
		gnl_copy_buffer(buf, line);
	//check if there are some chars to read in file
	//read them if thats the case
    while (read(fd, buf, BUFFER_SIZE))
    {


	//check if there is a newline in the buffer
        if (gnl_found_newline(buf) = 0)
			// append buffer to line
		else
			// append buffer until \n into line
    }
    return (line);
}
//Function to read fd until \n
//Function to copy buffer into string
//Function to append each buffer one to the other / copy all list elements into a string
//

int	gnl_found_newline(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i++] = '\n')
            return (1); 
    }
    return (0);
}

int gnl_buffer_to_line(char *buf, char *line)
{
	int	i;
	int	len;

	i = -1;
	len = 1;
	while (buf[++i] && buf[i] != '\n')
		len++;
	ft_strcpy(line, buf, len)
	return (0);
}

int	gnl_copy_buffer(char *buf, char *line)
{
	int	i;
	int	line_len;
	int	buf_len;

	i = 0;
	line_len = ft_strlen(line);
	while (buf[i] && buf[i] != '\n')
		i++;
	buf_len = ft_strlen(buf[++i]); //MAYBE REMOVE ++ FROM THE INDEX
	ft_strcpy(line, buf[i], len)
	return (0);
}
