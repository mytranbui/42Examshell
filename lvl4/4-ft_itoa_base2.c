/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 10:20:23 by exam              #+#    #+#             */
/*   Updated: 2020/02/24 15:21:03 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		find_size(int value, int base)
{
	int	len;

	len = 0;
	while (value)
	{
		len++;
		value /= base;
	}
	return (len);
}

char	*ft_itoa_base(int value, int base)
{
	char	*ret;
	char	*str_base;
	int		len;
	int		sign;
	long	n;

	sign = 0;
	n = value;
	str_base = "0123456789ABCDEF";
	len = find_size(value, base);
	if (base < 2 || base > 16)
		return (0);
	if (value == 0)
		return ("0");
	value < 0 && base == 10 ? sign = 1 && len++ : len;
	value < 0 ? n = -n : n;
	ret = (char *)malloc(sizeof(char) * len + 1);
	ret[len] = '\0';
	sign ? ret[0] = '-' : 0;
	while (n)
	{
		ret[--len] = str_base[n % base];
		n /= base;
	}
	return (ret);
}

int		main()//int argc, char **argv)
{
//	if (argc == 3)
//	{
//		printf("size of value : %d\n", find_size(atoi(argv[1]), atoi(argv[2])));
//		printf("itoa : %s\n", ft_itoa_base(atoi(argv[1]), atoi(argv[2])));
		printf("%s\n", ft_itoa_base(-2147483648, 10));
		printf("%s\n", ft_itoa_base(-2147483648, 2));
		printf("%s\n", ft_itoa_base(-2147, 10));
		printf("%s\n", ft_itoa_base(0, 16));
		printf("%s\n", ft_itoa_base(125, -2));
		printf("%s\n", ft_itoa_base(2147483647, 10));
//	}
	return (0);
}
