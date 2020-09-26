/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-str_capitalizer2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 19:17:52 by mbui              #+#    #+#             */
/*   Updated: 2019/06/04 09:28:28 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_capitalizer(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '\t' || i == 0)
				&& s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		else if (!(s[i - 1] == ' ' || s[i - 1] == '\t' || i == 0)
				&& s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] + 32;
		write(1, &s[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int j;

	j = 1;
	while (argc > j)
	{
		str_capitalizer(argv[j]);
		write(1, "\n", 1);
		j++;
	}
	if (argc == 1)
		write(1, "\n", 1);
	return (0);
}

#include <unistd.h>

void	str_capitalizer(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '\t' || i == 0)
				&& (s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] - 32;
		else if (!(s[i - 1] == ' ' || s[i - 1] == '\t' || i == 0)
				&& (s[i] >= 'A' && s[i] <= 'Z'))
			s[i] = s[i] + 32;
		write(1, &s[i++], 1);
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int j;

	j = 0;
	while (j++ < argc - 1)
		str_capitalizer(argv[j]);
	if (argc == 1)
		write(1, "\n", 1);
	return (0);
}
