/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5-biggest_pal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 18:34:34 by mbui              #+#    #+#             */
/*   Updated: 2019/06/04 12:08:15 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	biggest_pal(char *s)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] != s[j])
		j--;
	while (s[j])
	{
		if (s[i] == s[j])
		{
			write(1, &s[i], 1);
			j--;
			i++;
		}
		else
			i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		biggest_pal(argv[1]);
	write(1, "\n", 1);
	return (0);
}
//wrong
