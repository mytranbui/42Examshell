/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:29:17 by mbui              #+#    #+#             */
/*   Updated: 2019/05/20 14:29:24 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		find_size(int nbr, int len)
{
	while ((nbr / 10) != 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char			*str;
	int				len;
	int				tmp;
	unsigned int	n;

	n = nbr;
	len = 1;
	if (nbr < 0)
	{
		len++;
		n = -nbr;
	}
	len = find_size(nbr, len);
	tmp = len;
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while ((n / 10) != 0)
	{
		len--;
		str[len] = (n % 10) + 48;
		n /= 10;
	}
	str[len - 1] = n + 48;
	if (len == 2)
		str[0] = '-';
	str[tmp] = '\0';
	return (str);
}
