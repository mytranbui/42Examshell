/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-ft_strspn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:37:11 by mbui              #+#    #+#             */
/*   Updated: 2019/06/18 10:39:00 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *str, char c)
{
	char 	*s;

	s = (char *)str;
	while(*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return(NULL);
}

size_t  ft_strspn(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_strchr(s2, s1[i]))
		i++;
	return (i);
}

#include <stdio.h>
#include <string.h>

int		main()
{
	char	*s1 = "abcd";
	char	*s2 = "abcg";

	printf("mine: %zu\n", ft_strspn(s1, s2));
	printf("libc: %zu\n", strspn(s1, s2));
	return(0);
}

//return nb of identical letters between the 2 strings
