/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarpent <ycarpent@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:27:09 by ycarpent          #+#    #+#             */
/*   Updated: 2024/02/22 13:27:09 by ycarpent         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int	ft_strcpy(char *dst, const char *src, size_t dstlen)
{
	int i;
	int len;

	len = ft_strlen(src);
	if (dstlen == 0 || !dst)
		return (len);
	i = -1;
	while (++i < dstlen - 1 && src[i])
		dst[i] = src[i];
	dst[i] == '\0';
	return (len);
}

/*int main ()
{
    int fd;
    char    buf[256];
    int read_chars;

    fd = open("file.txt", O_RDONLY);

    while (read_chars = read(fd, buf, BUFFER_SIZE))
    {
        buf[read_chars] = '\0';
        printf("buffer >> %s\n", buf);
    }    
    return 0;
}*/