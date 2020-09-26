/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-lcm.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:38:55 by mbui              #+#    #+#             */
/*   Updated: 2019/06/10 13:17:44 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_min(unsigned int a, unsigned int b)
{
	return (a < b ? a : b);
}

unsigned int	hcf(unsigned int a, unsigned int b)
{
	unsigned int i;
	unsigned int pgcd;

	i = 1;
	pgcd = 1;
	while (i <= ft_min(a, b))
	{
		if (a % i == 0 && b % i == 0)
			pgcd = i;
		i++;
	}
	return (pgcd);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int ppcm;

	ppcm = 1;
	if (!a || !b)
		ppcm = 0;
	ppcm = (a * b) / hcf(a, b);
	return (ppcm);
}

int	main(void)
{
	printf("LCM(25, 50) = %d\n", lcm(25, 50));
	printf("LCM(8, 12) = %d\n", lcm(8, 12));
	printf("LCM(120, 150) = %d\n", lcm(120, 150));
	printf("LCM(40, -5) = %d\n", lcm(40, -5));
	printf("LCM(0, 50) = %d\n", lcm(0, 50));
	printf("LCM(1, 1) = %d\n", lcm(1, 1));
	printf("LCM(21, 35) = %d\n", lcm(21, 35));
	printf("LCM(32, 27) = %d\n", lcm(32, 27));
	return (0);
}
