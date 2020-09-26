/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4-ft_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 08:34:26 by mbui              #+#    #+#             */
/*   Updated: 2019/05/31 11:03:23 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		spaces(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int		nstrings(char *s)
{
	int tmp;
	int n;

	tmp = 0;
	n = 0;
	while (*s)
	{
		if (spaces(*s) && tmp == 1)
			tmp = 0;
		if (!spaces(*s) && tmp == 0)
		{
			tmp = 1;
			n++;
		}
		s++;
	}
	return (n);
}

int		lstring(char *s, int start)
{
	int end;

	end = 0;
	while (!spaces(s[start + end]))
		end++;
	return (end);
}

char	*ft_strsub(char *s, int start, int len)
{
	char	*d;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(d = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		d[i] = s[start + i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

char	**ft_split(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	if (str == 0 || !(tab = (char**)malloc(sizeof(char *) * nstrings(str) + 1)))
		return (NULL);
	while (j < nstrings(str))
	{
		if (spaces(str[i]))
			i++;
		else
		{
			len = lstring(str, i);
			if (!(tab[j] = ft_strsub(str, i, len)))
				return (NULL);
			i += len;
			j++;
		}
	}
	tab[j] = 0;
	return (tab);
}

int				main(void)
{
	char **str = ft_split("coucou les amis mon nom est dora");

	if (str)
	{
		printf("%s\n", str[0]);
		printf("%s\n", str[1]);
		printf("%s\n", str[2]);
		printf("%s\n", str[3]);
		printf("%s\n", str[4]);
		printf("%s\n", str[5]);
		printf("%s\n", str[6]);
		printf("%s\n", str[7]);
	}
	return (0);
}
