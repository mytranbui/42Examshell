/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4-sort_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:36:49 by mbui              #+#    #+#             */
/*   Updated: 2019/06/09 12:50:35 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

int		main(void)
{
	int tab[10] = {5, -4, 10, 47, -3, 3, 0, 5, 8};

	sort_int_tab(tab, 9);
	printf("%d\n", tab[0]);
	printf("%d\n", tab[1]);
	printf("%d\n", tab[2]);
	printf("%d\n", tab[3]);
	printf("%d\n", tab[4]);
	printf("%d\n", tab[5]);
	printf("%d\n", tab[6]);
	printf("%d\n", tab[7]);
	printf("%d\n", tab[8]);
	//printf("%d\n", tab[9]);
	return (0);a
}
