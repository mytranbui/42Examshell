/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-add_prime_sum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 16:19:23 by mbui              #+#    #+#             */
/*   Updated: 2019/05/16 10:54:21 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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
	int n;
	int r;

	n = 0;
	r = 0;
	while (*str == '\t' || *str == '\n' || *str == '\r' || *str == '\f' ||
			*str == '\v' || *str == ' ')
		str++;
	if (*str == '-')
		n = -1;
	if (*str == '+' || *str == '-')
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

int		is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		add_prime_sum(int n)
{
	int i;
	int r;

	i = 0;
	r = 0;
	while (i < n)
	{
		if (is_prime(n))
			r += n;
		n--;
	}
	return (r);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_putnbr(add_prime_sum(ft_atoi(argv[1])));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
