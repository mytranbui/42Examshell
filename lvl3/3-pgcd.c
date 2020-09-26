/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 09:27:43 by mbui              #+#    #+#             */
/*   Updated: 2019/05/14 15:43:07 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	min(int a, int b)
{
	return (a < b ? a : b);
}

int	pgcd(int a, int b)
{
	int i;
	int div;

	i = 1;
	div = 1;
	while (i <= min(a, b))
	{
		if (a % i == 0 && b % i == 0)
			div = i;
		i++;
	}
	return (div);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", pgcd(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
	return (0);
}
