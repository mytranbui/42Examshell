/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4-rev-wstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 13:25:27 by mbui              #+#    #+#             */
/*   Updated: 2019/06/09 13:26:09 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void    ft_split(char *str)
{
	char	**tab;
	int		j;
	int		i;
	int		len;

	j = 0;
	i = 0;
	if (!str || !(tab = (char **)malloc(sizeof(char *) * nb_words(str) + 1)))
		return ;
	while (j < nb_words(str))
	{
		if (spaces(str[i]))
			i++;
		else
		{
			len = len_word(str, i);
			if (!(tab[j] = ft_strsub(str, i, len)))
				return ;
			i += len;
			j++;
		}
	}
	tab[j] = 0;
	while (j > 0)
	{
		ft_putstr(tab[j]);
		write(1," ", 1);
		j++;
	}
}

/*void	rev_wstr(char *str)
{
	int j;
	char **tab = ft_split(str);

	j = 0;
//	tab = ft_split(str);
	ft_putstr(tab[j]);
	while (tab[j])
		j++;
	j--;
	while (tab[j])
	{
		ft_putstr(tab[j]);
	//	write(1, tab[j], sizeof(tab[j]));
		write(1," ", 1);
		j++;
	}
}*/

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_split(argv[1]);
	write(1, "\n", 1);
	return (1);
}
