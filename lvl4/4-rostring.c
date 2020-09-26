/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4-rostring.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 20:01:58 by mbui              #+#    #+#             */
/*   Updated: 2019/05/22 09:15:04 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		spaces(char c)
{
	return (c == ' ' || c == '\t');
}

int			ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void		ft_putstr(char *str)
{
	if (str)
		write(1, str, ft_strlen(str));
}

char		*ft_strdup(char *str, int start, int len)
{
	char	*dst;
	int		i;

	i = 0;
	if (!(dst = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		dst[i] = str[start];
		i++;
		start++;
	}
	dst[i] = '\0';
	return (dst);
}

int			main(int argc, char **argv)
{
	char	*last_word;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(argv[1]);
	last_word = NULL;
	if (argc >= 2)
	{
		while (len > 0 && (spaces(argv[1][len]) || argv[1][len] == '\0'))
			len--;
		argv[1][len + 1] = '\0';
		len = 0;
		while (argv[1][len] && spaces(argv[1][len]))
			len++;
		i = len;
		while (argv[1][i] && (!spaces(argv[1][i])))
			i++;
		last_word = ft_strdup(argv[1], len, i - len);
		while (argv[1][i] && spaces(argv[1][i]))
			i++;
		if (argv[1][i])
		{
			while (argv[1][i])
			{
				if (!spaces(argv[1][i]))
					write(1, &argv[1][i], 1);
				if (spaces(argv[1][i]))
				{
					write(1, " ", 1);
					while (argv[1][i] && spaces(argv[1][i]))
						i++;
				}
				else
					i++;
			}
			write(1, " ", 1);
		}
		ft_putstr(last_word);
		free(last_word);
	}
	write(1, "\n", 1);
	return (0);
}
