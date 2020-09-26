/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-ft_list_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 10:58:01 by mbui              #+#    #+#             */
/*   Updated: 2019/05/22 13:28:45 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		++i;	
	}
	return(i);
}

int main()
{
	printf("%d\n", ft_list_size());
	return (0);
}
