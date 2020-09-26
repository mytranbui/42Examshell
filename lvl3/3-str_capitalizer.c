/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:02:58 by mbui              #+#    #+#             */
/*   Updated: 2019/05/09 10:18:44 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*str_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\t' || i == 0) &&
				(str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		else if (!(str[i - 1] == ' ' || str[i - 1] == '\t' || i == 0) &&
				(str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int j;
	int i;

	j = 1;
	i = 0;
	if (argc == 1)
		write(1, "\n", 1);
	while (argc > j)
	{
		i = 0;
		str_capitalizer(argv[j]);
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
