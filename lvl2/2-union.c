/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-union.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 13:17:30 by mbui              #+#    #+#             */
/*   Updated: 2019/05/21 19:02:42 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check(char *str, char c, int i)
{
	int j;

	j = 0;
	while (j < i)
	{
		if (str[j] == c)
			return (0);
		j++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (check(s1, s1[i], i))
			write(1, &s1[i], 1);
		i++;
	}
	while (s2[j])
	{
		if (check(s1, s2[j], i) && check(s2, s2[j], j))
			write(1, &s2[j], 1);
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
