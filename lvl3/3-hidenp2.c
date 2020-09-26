/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-hidenp2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 09:26:37 by mbui              #+#    #+#             */
/*   Updated: 2019/06/04 09:30:45 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	hidenp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*s2)
		if (*s2++ == s1[i])
			i++;
	if (i == ft_strlen(s1))
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
