/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4-ft_itoa2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:29:17 by mbui              #+#    #+#             */
/*   Updated: 2019/06/09 12:17:40 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		find_size(int nbr, int len)
{
	while (nbr / 10 != 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	unsigned int	nb;
	char			*r;
	int				len;

	len = 1;
	nb = nbr;
	if (nbr < 0)
	{
		nb = -nbr;
		len++;
	}
	len = find_size(nbr, len);
	r = (char *)malloc(sizeof(char) * len + 1);
	r[len] = '\0';
	while (nb / 10 != 0)
	{
		len--;
		r[len] = nb % 10 + 48;
		nb /= 10;
	}
	r[len--] = nb + 48;
	if (len == 2)
		r[0] = '-';
	return (r);
}
