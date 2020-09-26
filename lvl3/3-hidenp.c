/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-hidenp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 11:07:44 by mbui              #+#    #+#             */
/*   Updated: 2019/06/04 09:30:11 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	hidenp(char *s1, char *s2)
{
	int j;

	j = 0;
	while (*s2)
	{
		if (s1[j] == *s2)
			j++;
		s2++;
	}
	if (j == ft_strlen(s1))
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
