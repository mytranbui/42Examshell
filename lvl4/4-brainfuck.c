/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:03:13 by mbui              #+#    #+#             */
/*   Updated: 2019/06/04 10:31:57 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	brainfuck(char *str)
{
	int		i;
	int		loop;
	char	*ptr;

	i = 0;
	if (!(ptr = (char *)malloc(sizeof(char) * 2048)))
		return ;
	while (i <= 2048)
		ptr[i++] = '\0';
	i = 0;
	while (str[i])
	{
		str[i] == '>' ? ptr++ : ptr;
		str[i] == '<' ? ptr-- : ptr;
		str[i] == '+' ? (*ptr)++ : *ptr;
		str[i] == '-' ? (*ptr)-- : *ptr;
		if (str[i] == '.')
			write(1, ptr, 1);
		if (str[i] == '[' && *ptr == 0)
		{
			loop = 1;
			while (loop)
			{
				i++;
				str[i] == '[' ? loop++ : loop;
				str[i] == ']' ? loop-- : loop;
			}
		}
		else if (str[i] == ']' && *ptr != 0)
		{
			loop = 1;
			while (loop)
			{
				i--;
				str[i] == '[' ? loop-- : loop;
				str[i] == ']' ? loop++ : loop;
			}
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		brainfuck(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
