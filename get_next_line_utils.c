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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

int	ft_strcpy(char *dst, const char *src, size_t dstlen)
{
	size_t	i;
	int		len;

	len = ft_strlen((char *)src);
	if (dstlen == 0 || !dst)
		return (len);
	i = 0;
	while (i < dstlen - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*us;
	unsigned char	uc;

	if (!s)
		return (NULL);
	i = 0;
	us = (unsigned char *)s;
	uc = (unsigned char)c;
	while (i < n)
	{
		if (us[i] == uc)
			return ((void *) &us[i]);
		i++;
	}
	return (NULL);
}
