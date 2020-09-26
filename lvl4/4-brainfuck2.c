/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4-brainfuck2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 10:32:03 by mbui              #+#    #+#             */
/*   Updated: 2019/06/05 08:57:54 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	brainfuck(char *s)
{
	char	*ptr;
	int		loop;

	if (!(ptr = (char *)malloc(sizeof(char) * 2048)))
		return ;
	while (*ptr)
		*ptr++ = 0;
	while (*s)
	{
		*s == '<' ? ptr-- : ptr;
		*s == '>' ? ptr++ : ptr;
		*s == '-' ? (*ptr)-- : *ptr;
		*s == '+' ? (*ptr)++ : *ptr;
		if (*s == '.')
			write(1, ptr, 1);
		if (*s == '[' && *ptr == 0)
		{
			loop = 1;
			while (loop)
			{
				s++;
				*s == '[' ? loop++ : loop;
				*s == ']' ? loop-- : loop;
			}
		}
		if (*s == ']' && *ptr != 0)
		{
			loop = 1;
			while (loop)
			{
				s--;
				*s == '[' ? loop-- : loop;
				*s == ']' ? loop++ : loop;
			}
		}
		s++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		brainfuck(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
