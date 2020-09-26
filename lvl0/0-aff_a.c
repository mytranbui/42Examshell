/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0-aff_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 12:17:08 by mbui              #+#    #+#             */
/*   Updated: 2019/05/20 13:11:18 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	aff_a(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		if (aff_a(argv[1]) == 1)
			write(1, "a", 1);
	write(1, "\n", 1);
	return (0);
}

int	aff_a(char *str)
{
	while (*str++)
		if (*str == 'a')
			return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2 || aff_a(argv[1]))
		write(1, "a", 1);
	write(1, "\n", 1);
	return (0);
}
