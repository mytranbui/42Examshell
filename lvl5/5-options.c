/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5-options.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 18:33:50 by mbui              #+#    #+#             */
/*   Updated: 2019/06/04 12:07:46 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int j;
	int s[32] = {0};

	i = 1;
	if (argc == 1)
	{
		write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 36);
		return (0);
	}
	while (i < argc)
	{
		j = 1;
		if (argv[i][0] == '-')
		{
			while (argv[i][j] && argv[i][j] >= 'a' && argv[i][j] <= 'z')
			{
				if (argv[i][j] == 'h')
				{
					write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 36);
					return (0);
				}
				s['z' - argv[i][j] + 6] = 1;
				j++;
			}
			if (argv[i][j])
			{
				write(1, "Invalid Option\n", 15);
				return (0);
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 32)
	{
		s[i] = s[i] + '0';
		write(1, &s[i++], 1);
		if (i == 32)
			write(1, "\n", 1);
		else if (i % 8 == 0)
			write(1, " ", 1);
	}
	return (0);
}
