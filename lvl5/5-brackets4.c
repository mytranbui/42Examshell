/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5-brackets4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <exam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 10:43:58 by exam              #+#    #+#             */
/*   Updated: 2019/06/17 15:38:19 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	pairs(char a, char b)
{
	return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
}

int	brackets(char *s)
{
	int j;
	char tmp[4096];

	j = 0;
	while (*s)
	{
		if (*s == '(' || *s == '[' || *s == '{')
			tmp[++j] = *s;
		if (*s == ')' || *s == ']' || *s == '}')
			if (!pairs(tmp[j--], *s))
				return (0);
		s++;
	}
	return (j == 0 ? 1 : 0);
}

int	main(int argc, char **argv)
{
	int j;

	j = 1;
	if (argc == 1)
		write(1, "\n", 1);
	while (argc > j)
		if (brackets(argv[j++]))
			write(1, "OK\n", 3);
		else
			write(1, "Error\n", 6);
	return (0);
}
