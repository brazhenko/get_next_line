/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lreznak- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 19:42:50 by lreznak-          #+#    #+#             */
/*   Updated: 2018/12/11 20:05:27 by lreznak-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <strings.h>

static int			ft_strlen_bsn(char *str)
{
	int len;

	len = 0;
	while (*str && *str != '\n')
	{
		len++;
		str++;
	}
	return (len);
}

int					get_next_line(const int fd, char **line)
{
	static char			*buf[FD_MAX];
	int					str_len;
	char				*str1;
	char				*str2;
	char				*str3;

	if (fd < 0 || !line || FD_MAX < fd)
		return (-1);
	str1 = ft_strnew(1);
	str2 = ft_strnew(BUFF_SIZE);
	if (!buf[fd])
	{
		if (read(fd, NULL, 0) == -1)
			return (-1);
		while (read(fd, str2, BUFF_SIZE))
		{
			str3 = str1;
			if (!(str1 = ft_strjoin((const char *)str1, (const char *)str2)))
				return (-1);
			free(str3);
		}
		buf[fd] = str1;
	}
	if (!(*buf[fd]))
		return (0);
	if ((str_len = ft_strlen_bsn(buf[fd])))
		if (!(*line = (char *)malloc(str_len + 1)))
			return (-1);
	while (*buf[fd] && *buf[fd] != '\n')
	{
		**line = *buf[fd];
		buf[fd]++;
		(*line)++;
	}
	**line = 0;
	(*line) -= str_len;
	if (*buf[fd] == '\n')
		buf[fd]++;
	printf("\n??????? %c ?????????\n", *buf[fd]);
	return (1);
}


int			main(void)
{
	int n = 5;
	char *cp;
	char *cp1;
	char *cp2;
	char *cp3;
	int fd = open("file", O_RDONLY);
	int m = 10;

	{
		printf("%d\n", get_next_line(fd, &cp));
		printf("%s\n", cp);
		/*printf("%d\n", get_next_line(fd, &cp));
		printf("%s\n", cp);
		printf("%d\n", get_next_line(fd, &cp));
		printf("%s\n", cp);
		printf("%d\n", get_next_line(fd, &cp));
		printf("%s\n", cp);*/

	}

}

