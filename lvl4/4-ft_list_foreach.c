/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4-ft_list_foreach.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:41:40 by mbui              #+#    #+#             */
/*   Updated: 2019/06/05 09:42:19 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*new;

	new = begin_list;
	while (new)
	{
		(*f)(new->data);
		new = new->next;
	}
}

//idk if it works
