/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 10:16:14 by mbui              #+#    #+#             */
/*   Updated: 2019/05/30 15:43:06 by mbui             ###   ########.fr       */
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

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i--;
		while (spaces(argv[1][i]))
			i--;
		while (argv[1][i] && !spaces(argv[1][i]))
			i--;
		i++;
		while (argv[1][i] && !spaces(argv[1][i]))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
