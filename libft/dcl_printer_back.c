/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dcl_printer_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lreznak- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 18:56:13 by lreznak-          #+#    #+#             */
/*   Updated: 2018/12/21 17:04:10 by lreznak-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			dcl_printer_back(t_dcl *elem)
{
	while (elem)
	{
		dcl_el_printer(elem);
		elem = elem->previous;
	}
}
