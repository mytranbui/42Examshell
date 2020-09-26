/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5-brackets3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:52:58 by mbui              #+#    #+#             */
/*   Updated: 2019/06/10 12:53:32 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	pairs(char a, char b)
{
	return ((a == '(' && b == ')') || (a == '{' && b == '}') ||
	(a == '[' && b == ']'));
}

int	brackets(char *s)
{
	char	tmp[4096];
	int		i;

	i = 0;
	while (*s)
	{
		if (*s == '(' || *s == '{' || *s == '[')
			tmp[i++] = *s;
		if (*s == ')' || *s == '}' || *s == ']')
			if (!pairs(tmp[--i], *s))
				return (0);
		s++;
	}
	return (i == 0 ? 1 : 0);
}

int	main(int argc, char **argv)
{
	int j;

	j = 1;
	while (argc > j)
		if (brackets(argv[j++]))
			write(1, "OK\n", 3);
		else
			write(1, "Error\n", 6);
	if (argc == 1)
		write(1, "\n", 1);
	return (0);
}
