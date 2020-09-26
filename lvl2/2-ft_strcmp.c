/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-ft_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 11:17:21 by mbui              #+#    #+#             */
/*   Updated: 2019/05/17 07:29:41 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 != '\0')
		return (*s1);
	if (*s2 != '\0')
		return (-*s2);
	return (0);
}

int	ft_strcmp2(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	printf("%d ", strcmp("coco", "coconut"));
	printf("\n");
	printf("%d ", ft_strcmp("coco", "coconut"));
	printf("\n");
	printf("%d", ft_strcmp2("coco", "coconut"));
	return (0);
}
