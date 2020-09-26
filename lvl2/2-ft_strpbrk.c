/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-ft_strpbrk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 17:35:48 by mbui              #+#    #+#             */
/*   Updated: 2019/06/17 17:37:52 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, char c)
{
	char 	*s;

	s = (char *)str;
	while(*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return(NULL);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (ft_strchr(s2, *s1))
			return (char *)s1;
		s1++;
	}
	return (NULL);
}

int main(void)
{
	char s1[] = "salut les cocos";
	char s2[] = "dzagrg";

	printf("le resultat est: %s.\n", ft_strpbrk(s1, s2));
	return (0);
}
