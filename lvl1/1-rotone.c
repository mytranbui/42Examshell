/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-rotone.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <exam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 10:22:01 by exam              #+#    #+#             */
/*   Updated: 2019/05/27 13:46:38 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	while (argc == 2 && argv[1][i])
	{
		if ((argv[1][i] >= 'a' && argv[1][i] < 'z') ||
				(argv[1][i] >= 'A' && argv[1][i] < 'Z'))
			argv[1][i] = argv[1][i] + 1;
		else if (argv[1][i] == 'z' || argv[1][i] == 'Z')
			argv[1][i] = argv[1][i] - 25;
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	while (argc == 2 && *argv[1])
	{
		if ((*argv[1] >= 'a' && *argv[1] < 'z') ||
				(*argv[1] >= 'A' && *argv[1] < 'Z'))
			*argv[1] = *argv[1] + 1;
		else if (*argv[1] == 'z' || *argv[1] == 'Z')
			*argv[1] = *argv[1] - 25;
		write(1, argv[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
