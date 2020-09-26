/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-ft_range.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:11:25 by mbui              #+#    #+#             */
/*   Updated: 2019/05/27 10:48:25 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
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

int	ft_abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}

int	*ft_range(int start, int end)
{
	int n;
	int *tab;

	n = start >= end ? start - end : end - start;
	tab = (int*)malloc(sizeof(int) * n - 1); //why -1?
	while (start != end)
		*tab++ = start > end ? end++ : end--;
	*tab = end;
	return (tab - n);
}

int		main(int ac, char **av)
{
	int		*s;
	int		n;
	int		min;
	int		max;

	min = atoi(av[1]);
	max = atoi(av[2]);
	n = max >= min ? max - min + 1 : min - max + 1;
	if (ac != 3)
		return (0);
	s = ft_range(min, max);
	while (*s && n--)
		printf("%d\n", *s++);
	return (1);
}

//probably wrong
