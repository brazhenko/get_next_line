/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dcl_take_n.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lreznak- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 19:03:52 by lreznak-          #+#    #+#             */
/*   Updated: 2018/12/21 17:03:18 by lreznak-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			dcl_take_n(int n, t_dcl **elem)
{
	dcl_begin(elem);
	while (n--)
	{
		dcl_forward(elem);
	}
}
