/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-is_power_of_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 14:49:20 by mbui              #+#    #+#             */
/*   Updated: 2019/05/17 07:47:42 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int i;

	i = 2;
	if (n == 0)
		return (0);
	while (n != 1)
	{
		if (n % 2 != 0)
			return (0);
		n /= 2;
	}
	return (1);
}

int	is_power_of_2b(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	return ((n == 1) ? 1 : 0);
}

int	is_power_of_2c(unsigned int n)
{
	return n && (!(n & (n-1))); //manipulate bits
}

int	main(void)
{
	printf("16 =  %d\n", is_power_of_2(16));
	printf("-16 =  %d\n", is_power_of_2(-16));
	printf("64 =  %d\n", is_power_of_2(64));
	printf("2 =  %d\n", is_power_of_2(2));
	printf("1 =  %d\n", is_power_of_2(1));
	printf("0 =  %d\n", is_power_of_2(0));
	printf("31 =  %d\n", is_power_of_2(31));
	printf("-31 =  %d\n", is_power_of_2(-31));
	printf("\n");
	printf("16 =  %d\n", is_power_of_2b(16));
	printf("-16 =  %d\n", is_power_of_2b(-16));
	printf("64 =  %d\n", is_power_of_2b(64));
	printf("2 =  %d\n", is_power_of_2b(2));
	printf("1 =  %d\n", is_power_of_2b(1));
	printf("0 =  %d\n", is_power_of_2b(0));
	printf("31 =  %d\n", is_power_of_2b(31));
	printf("-31 =  %d\n", is_power_of_2b(-31));
	printf("\n");
	printf("16 =  %d\n", is_power_of_2c(16));
	printf("-16 =  %d\n", is_power_of_2c(-16));
	printf("64 =  %d\n", is_power_of_2c(64));
	printf("2 =  %d\n", is_power_of_2c(2));
	printf("1 =  %d\n", is_power_of_2c(1));
	printf("0 =  %d\n", is_power_of_2c(0));
	printf("31 =  %d\n", is_power_of_2c(31));
	printf("-31 =  %d\n", is_power_of_2c(-31));
	return (0);
}
