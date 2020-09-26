/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 14:53:34 by mbui              #+#    #+#             */
/*   Updated: 2019/05/09 09:58:03 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		main(void)
{
	int *a;
	int *b;
	int x;
	int y;

	x = 5;
	y = 2;
	a = &x;
	b = &y;
	ft_swap(a, b);
	printf("%d", *a);
	printf("%d", *b);
	return (0);
}
