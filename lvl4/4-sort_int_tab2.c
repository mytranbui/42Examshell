/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 09:29:10 by mbui              #+#    #+#             */
/*   Updated: 2019/06/09 09:31:08 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while (i++ < size)
	{
		j = -1;
		while (++j < size - 1)
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
	}
}
