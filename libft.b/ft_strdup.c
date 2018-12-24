/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacgyve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 21:25:20 by jmacgyve          #+#    #+#             */
/*   Updated: 2018/12/21 17:35:08 by lreznak-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *src)
{
	char	*duplicate;

	if ((duplicate = (char*)malloc(sizeof(*duplicate) * (ft_strlen(src) + 1))))
	{
		duplicate = ft_strcpy(duplicate, src);
		return (duplicate);
	}
	return (NULL);
}
