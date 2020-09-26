/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-ft_strrev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 11:45:14 by mbui              #+#    #+#             */
/*   Updated: 2019/05/17 07:43:09 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strrev(char *str)
{
	int		i;
	int		a;
	char	tmp;

	i = 0;
	a = 0;
	while (str[i])
		i++;
	i--;
	while (i > a)
	{
		tmp = str[i];
		str[i] = str[a];
		str[a] = tmp;
		a++;
		i--;
	}
	return (str);
}

int		main(void)
{
	char	c[] = "hello";

	ft_putstr(ft_strrev(c));
	return (0);
}
