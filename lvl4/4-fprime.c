/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 12:09:50 by exam              #+#    #+#             */
/*   Updated: 2019/05/09 10:05:17 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(char *str)
{
	int n;
	int div;

	n = atoi(str);
	div = 2;
	if (n == 1)
		printf("1");
	if (n < 0)
		return ;
	while (n >= div)
	{
		if (n % div == 0)
		{
			printf("%d", div);
			if (div == n)
				return ;
			printf("*");
			n = n / div;
			div = 1;
		}
		div++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		fprime(argv[1]);
	printf("\n");
	return (0);
}
