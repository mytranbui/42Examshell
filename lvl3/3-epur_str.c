/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-epur_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 15:32:41 by mbui              #+#    #+#             */
/*   Updated: 2019/06/04 09:31:56 by mbui             ###   ########.fr       */
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
			//		if (spaces(argv[1][i]))
			//			write(1, " ", 1);
			//		else
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

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
		while (argv[1][i] && j >= i)
		{
			while (spaces(argv[1][i]) && spaces(argv[1][i + 1]))
				i++;
			if (spaces(argv[1][i]) &&
					!((argv[1][i + 1] >= 'a' && argv[1][i + 1] <= 'z') ||
						(argv[1][i + 1] >= 'A' && argv[1][i + 1] <= 'Z') ||
						(argv[1][i + 1] >= '0' && argv[1][i + 1] <= '9')))
				i++;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
