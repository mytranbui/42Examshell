/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5-brackets.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:43:24 by mbui              #+#    #+#             */
/*   Updated: 2019/06/09 11:56:49 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	no_brackets(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '(' || s[i] == ')' || s[i] == '[' || s[i] == ']' ||
		s[i] == '{' || s[i] == '}')
			return (0);
		i++;
	}
	return (1);
}

int	pairs(char a, char b)
{
	return ((a == '(' && b == ')') || (a == '[' && b == ']') ||
			(a == '{' && b == '}'));
}

int	brackets(char *s)
{
	int		i;
	int		j;
	char	tmp[4096];

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
		{
			j++;
			tmp[j] = s[i];
		}
		if (s[i] == ')' || s[i] == ']' || s[i] == '}')
		{
			if (!(pairs(tmp[j], s[i])))
				return (0);
			j--;
		}
		i++;
	}
	return (j == 0 ? 1 : 0);
}

int	main(int argc, char **argv)
{
	int j;

	j = 1;
	while (j < argc)
	{
		if (no_brackets(argv[j]))
			write(1, "OK\n", 3);
		else if (brackets(argv[j]))
			write(1, "OK\n", 3);
		else
			write(1, "Error\n", 6);
		j++;
	}
	if (argc == 1)
		write(1, "\n", 1);
	return (0);
}
