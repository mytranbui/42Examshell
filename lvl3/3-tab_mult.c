/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-tab_mult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 14:44:10 by mbui              #+#    #+#             */
/*   Updated: 2019/05/20 07:57:48 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	unsigned int nb;

	nb = n;
	if (n < 0)
	{
		ft_putchar('-');
		nb = -n;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int		ft_atoi(char *str)
{
	int r;
	int n;

	n = 0;
	r = 0;
	while (*str == '\t' || *str == '\n' || *str == '\r' || *str == '\f' ||
			*str == '\v' || *str == ' ')
		str++;
	if (*str == '-')
		n = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		r = r * 10 + *str - 48;
		str++;
	}
	if (n == -1)
		r = -r;
	return (r);
}

void	tab_mult(char *str)
{
	int i;

	i = 1;
	while (i < 10)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(ft_atoi(str));
		write(1, " = ", 3);
		ft_putnbr(i * ft_atoi(str));
		write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
