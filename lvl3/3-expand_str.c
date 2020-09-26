/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-expand_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 14:33:22 by mbui              #+#    #+#             */
/*   Updated: 2019/05/14 15:23:48 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	spaces(char c)
{
	return (c == ' ' || c == '\t');
}

int	main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i--;
		while (spaces(argv[1][i]))
			i--;
		j = i;
		i = 0;
		while (spaces(argv[1][i]))
			i++;
		while (argv[1][i] && i <= j)
		{
			while (spaces(argv[1][i]) && spaces(argv[1][i + 1]))
				i++;
			if (spaces(argv[1][i]))
				write(1, "   ", 3);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
