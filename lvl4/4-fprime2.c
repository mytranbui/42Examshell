/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4-fprime2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <exam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 12:09:50 by exam              #+#    #+#             */
/*   Updated: 2019/06/11 12:45:42 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(int n)
{
	int div;

	div = 2;
	if (n < 0)
		return ;
	if (n == 1)
		printf("1");
	while (n >= div)
	{
		if (n % div == 0)
		{
			printf("%d", div);
			if (div != n)
				printf("*");
			n /= div;
			div = 1;
		}
		div++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}
