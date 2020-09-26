/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-wdmatch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 09:22:56 by mbui              #+#    #+#             */
/*   Updated: 2019/05/20 14:40:01 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(char *s1, char *s2)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	while (*s2 && i < len)
	{
		if (*s2 == s1[i])
			i++;
		s2++;
	}
	if (i == len)
		write(1, s1, len);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

//alternative

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	if (str)
		write(1, str, ft_strlen(str));
}

void	wdmatch(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s2[i])
	{
		if (s1[j] == s2[i])
			j++;
		i++;
	}
	if (j == ft_strlen(s1))
		ft_putstr(s1);
	write(1,"\n",1);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	else
		write(1,"\n",1);
	return (0);
}
