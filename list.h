/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lreznak- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:41:21 by lreznak-          #+#    #+#             */
/*   Updated: 2018/12/09 19:31:57 by lreznak-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "libft.h"

typedef struct	s_dcl
{
	char									c;
	int										n;
	void									*data;

	struct s_dcl							*next;
	struct s_dcl							*previous;
}				t_dcl;

int				dcl_rpn(t_dcl *elem);

void			dcl_el_printer(t_dcl *elem);
void			dcl_printer(t_dcl *elem);

void			dcl_begin(t_dcl **elem);
void			dcl_back(t_dcl **elem);
void			dcl_end(t_dcl **elem);
void			dcl_forward(t_dcl **elem);

t_dcl			*dcl_creator(char c, int n);
void			dcl_push_back(t_dcl **first, t_dcl *next);
t_dcl			*make_rpn(char *str);

void			dcl_el_printer(t_dcl *elem);
void			dcl_printer(t_dcl *elem);
void			dcl_printer_back(t_dcl *elem);
t_dcl			*dcl_creator(char c, int n);
void			dcl_push_back(t_dcl **first, t_dcl *next);
int				dcl_len(t_dcl *elem);
void			dcl_back(t_dcl **elem);
void			dcl_begin(t_dcl **elem);
void			dcl_forward(t_dcl **elem);
void			dcl_end(t_dcl **elem);
void			dcl_take_n(int n, t_dcl **elem);

int				calc(char *expr);

#endif
