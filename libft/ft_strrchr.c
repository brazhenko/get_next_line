/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lreznak- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 21:32:51 by lreznak-          #+#    #+#             */
/*   Updated: 2018/12/06 21:07:23 by lreznak-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char			my_c;
	char			*ptr;
	char			*str;

	my_c = (char)c;
	ptr = NULL;
	str = (char *)s;
	while (*str)
	{
		if (*str == my_c)
			ptr = str;
		str++;
	}
	if (*str == my_c)
		ptr = str;
	if (ptr)
		return (ptr);
	return (NULL);
}
