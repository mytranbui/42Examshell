/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4-ft_split2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 17:10:36 by mbui              #+#    #+#             */
/*   Updated: 2019/06/09 12:50:26 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		spaces(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int		nb_words(char *str)
{
	int tmp;
	int n;

	tmp = 0;
	n = 0;
	while (*str)
	{
		if (spaces(*str) && tmp == 1)
			tmp = 0;
		if (!spaces(*str) && tmp == 0)
		{
			tmp = 1;
			n++;
		}
		str++;
	}
	return (n);
}

int		len_word(char *str, int start)
{
	int end;

	end = 0;
	while (*str && !spaces(str[start + end]))
		end++;
	return (end);
}

char	*ft_strsub(char *str, int start,int len)
{
	char	*dst;
	int		i;

	i = 0;
	if (!str || !(dst = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		dst[i] = str[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char    **ft_split(char *str)
{
	char	**tab;
	int		j;
	int		i;
	int		len;

	j = 0;
	i = 0;
	if (!str || !(tab = (char **)malloc(sizeof(char *) * nb_words(str) + 1)))
		return (NULL);
	while (j < nb_words(str))
	{
		if (spaces(str[i]))
			i++;
		else
		{
			len = len_word(str, i);
			if (!(tab[j] = ft_strsub(str, i, len)))
				return (NULL);
			i += len;
			j++;
		}
	}
	tab[j] = 0;
	return (tab);
}
