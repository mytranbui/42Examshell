/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-ft_atoi_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 11:00:55 by mbui              #+#    #+#             */
/*   Updated: 2019/05/17 08:22:12 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_base(int c, int str_base)
{
	char	*str;
	char	*str2;
	int		i;

	i = 0;
	str = "0123456789abcdef";
	str2 = "0123456789ABCDEF";
	while (i < str_base)
	{
		if (str[i] == c || str2[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int r;
	int n;
	int i;

	n = 0;
	r = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f'
	|| str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		n = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_base(str[i], str_base) != -1)
	{
		r = r * str_base + ft_base(str[i], str_base) - 48;
		i++;
	}
	if (n == -1)
		r = -r;
	return (r);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", ft_atoi_base(argv[1], atoi(argv[2])));
	printf("\n");
	return (0);
}
