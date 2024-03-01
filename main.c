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
	char *str1;
	char *test;
	char *str2;
	size_t len;
	size_t len2;

	test = "uhfegyufgwqfuywqgfy123";
	str2 = "456qfhuyqwigfqwf";
	len = ft_strlen(test);
	len2 = ft_strlen(str2);
	str1 = (char *)malloc(sizeof(char) * len + len2);
	ft_strcpy(str1, test, len + 1);
	ft_strcat(str1, str2);
	printf("Result: %s", str1);
	return (0);
}
/*int main(void)
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
}*/