/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 18:44:58 by mbui              #+#    #+#             */
/*   Updated: 2019/05/26 15:54:11 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	while (argc == 2 && argv[1][i] != '\0')
		i++;
	i--;
	while (argc == 2 && argv[1][i])
	{
		write(1, &argv[1][i], 1);
		i--;
	}
	write(1, "\n", 1);
	return (0);
}

/*#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
			argv[1]++;
		argv[1]--;
		while (*argv[1])
			write(1, argv[1]--, 1);
	}
	write(1, "\n", 1);
	return (0);
}*/
