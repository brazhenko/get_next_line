/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lreznak- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 02:59:51 by lreznak-          #+#    #+#             */
/*   Updated: 2018/12/24 03:34:31 by lreznak-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <strings.h>

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
		printf("%d\n", get_next_line(fd, &cp1));
		printf("%s\n", cp1);
		printf("%d\n", get_next_line(fd, &cp2));
		printf("%s\n", cp2);
		printf("%d\n", get_next_line(fd, &cp3));
		printf("%s\n", cp3);
		printf("%d\n", get_next_line(fd, &cp3));
		printf("%s\n", cp3);
		printf("%d\n", get_next_line(fd, &cp3));
		printf("%s\n", cp3);
		printf("%d\n", get_next_line(fd, &cp3));
		printf("%d\n", get_next_line(fd, &cp3));
		printf("%d\n", get_next_line(fd, &cp3));
		printf("%d\n", get_next_line(fd, &cp3));
	}
}

