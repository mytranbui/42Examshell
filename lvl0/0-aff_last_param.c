/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 14:15:00 by mbui              #+#    #+#             */
/*   Updated: 2019/05/30 16:13:27 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		while (*argv[argc - 1] != '\0')
		{
			write(1, argv[argc - 1], 1);
			argv[argc - 1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

#include <unistd.h>

int main(int argc,char **argv)
{
	while (argc > 1 && *argv[argc - 1])
		write(1, argv[argc - 1]++, 1);
	write(1,"\n",1);
	return (0);
}
