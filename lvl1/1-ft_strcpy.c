/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 15:13:11 by mbui              #+#    #+#             */
/*   Updated: 2019/05/09 09:59:02 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int		main(void)
{
	char s1[] = "hello";
	char s2[] = "bye";

	ft_strcpy(s1, s2);
	printf("%s", s1);
	printf("\n");
	printf("%s", s2);
	return (0);
}
