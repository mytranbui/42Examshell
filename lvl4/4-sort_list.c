/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4-sort_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <exam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:43:37 by exam              #+#    #+#             */
/*   Updated: 2019/06/17 15:26:39 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*begin;
	t_list	*p;

	begin = lst;
	while (lst)
	{
		p = lst->next;
		while (p)
		{
			if (!(*cmp)(lst->data, p->data))
				swap(&lst->data, &p->data);
			p = p->next;
		}
		lst = lst->next;
	}
	return (begin);
}
