/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 09:58:57 by mbui              #+#    #+#             */
/*   Updated: 2019/05/13 13:41:29 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int				max;

	i = 0;
	if (tab == NULL || !len)
		return (0);
	max = tab[len - 1];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

/*int	main(void)
{
	int	*tab;

	if (!(tab = (int*)malloc(sizeof(int) * 3)))
		return (0);
	tab[0] = 7;
	tab[1] = 6;
	tab[2] = 4;
	printf("%d", max(tab, 3));
	return (0);
}*/

//wrong
