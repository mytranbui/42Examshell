/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 10:32:43 by mbui              #+#    #+#             */
/*   Updated: 2019/05/09 09:56:58 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	repeat(char c)
{
	int r;

	r = 1;
	if (c >= 'a' && c <= 'z')
		r = 1 + c - 'a';
	else if (c >= 'A' && c <= 'Z')
		r = 1 + c - 'A';
	return (r);
}

int	main(int argc, char **argv)
{
	int x;
	int i;

	i = 0;
	while (argc == 2 && argv[1][i])
	{
		x = 0;
		while (x < repeat(argv[1][i]))
		{
			write(1, &argv[1][i], 1);
			x++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
