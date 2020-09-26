/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5-options2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:03:36 by mbui              #+#    #+#             */
/*   Updated: 2019/06/04 12:07:44 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	s[32] = "00000000000000000000000000000000";

	j = 1;
	if (argc == 1)
	{
		write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 36);
		return (0);
	}
	while (j < argc)
	{
		i = 1;
		if (argv[j][0] == '-')
		{
			while (argv[j][i] && argv[j][i] >= 'a' && argv[j][i] <= 'z')
			{
				if (argv[j][i] == 'h')
				{
					write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 36);
					return (0);
				}
				s['z' - argv[j][i] + 6] = '1';
				i++;
			}
			if (argv[j][i])
			{
				write(1, "Invalid Option\n", 15);
				return (0);
			}
			i++;
		}
		j++;
	}
	i = 0;
	while (i < 32)
	{
		write(1, &s[i++], 1);
		if (i == 32)
			write(1, "\n", 1);
		else if (i % 8 == 0)
			write(1, " ", 1);
	}
	return (0);
}
