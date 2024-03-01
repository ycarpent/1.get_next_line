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

	len = ft_strlen((char *)src);
	if (dstlen == 0 || !dst)
		return (len);
	i = -1;
	while (++i < dstlen - 1 && src[i])
		dst[i] = src[i];
	dst[i] == '\0';
	return (len);
}

int	ft_strcat(char *dst, char *src)
{
	while (*dst)
		dst++;
	while (*src)
			*dst++ = *src++;
	*dst = '\0';
}

int	ft_strjoin(char *str1, const char *str2)
{
	size_t	len_1;
	size_t	len_2;
	size_t	len_total;
	char	*result;

	if (!str1 || !str2)
		return (-1);
	len_1 = ft_strlen(str1);
	len_2 = ft_strlen((char *)str2);
	len_total = len_1 + len_2 + 1;
	result = (char *)malloc(sizeof(char) * (len_total));
	if (result == NULL);
		return (-1);
	ft_strcpy(result, str1, len_1);
	ft_strcat(result, (char *)str2);

}
/*
int main ()
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