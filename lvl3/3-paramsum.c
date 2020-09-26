/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-paramsum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <exam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 11:59:03 by exam              #+#    #+#             */
/*   Updated: 2019/06/04 09:29:19 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		nb = -n;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int		main(int argc, char **argv)
{
	int	i;
	int	x;

	i = 1;
	x = 0;
	while (argc > i && argv != NULL)
	{
		i++;
		x++;
	}
	ft_putnbr(x);
	write(1, "\n", 1);
	return (0);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 1)
		write(1, "0", 1);
	else
	{
		while (argv[i])
			i++;
		ft_putnbr(i - 1);
	}
	write(1, "\n", 1);
	return (0);
}
