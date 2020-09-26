/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moment.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 18:11:37 by exam              #+#    #+#             */
/*   Updated: 2019/06/10 18:35:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *s)
{
	int i; 

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcat(char *s1, char *s2)
{
	char *ret;
	int i;

	i = 0;
	ret = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	while (*s1)
		ret[i++] = *s1++;
	while (*s2)
		ret[i++] = *s2++;
	ret[i] = '\0';
	return (ret);
}

unsigned int ft_uitlen(unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_uitoa(unsigned int n)
{
	char *ret;
	int len;

	len = ft_uitlen(n);
	ret = (char *)malloc(sizeof(char) * len + 1);
	ret[len] = '\0';
	while (n / 10 != 0)
	{
		len--;
		ret[len] = n % 10 + 48;
		n /= 10;
	}
	ret[len - 1] = n + 48;
	return (ret);
}

char    *moment(unsigned int duration)
{
	if (duration == 0)
		return ("0 seconds ago.");
	if (duration == 1)
		return ("1 second ago.");
	if (duration < 60)
		return (ft_strcat(ft_uitoa(duration), " seconds ago."));
	else if (duration < 120)
		return ("1 minute ago.");
	else if (duration < 3600)
		return (ft_strcat(ft_uitoa(duration / 60), " minutes ago."));
	else if (duration < 7200)
		return ("1 hour ago.");
	else if (duration < 86400)
		return (ft_strcat(ft_uitoa(duration / 3600), " hours ago."));
	else if (duration < 172800)
		return ("1 day ago.");
	else if (duration < 2592000)
		return (ft_strcat(ft_uitoa(duration / 86400), " days ago."));
	else if (duration < 5184000)
		return ("1 month ago.");
	else
		return (ft_strcat(ft_uitoa(duration / 2592000), " months ago."));
}
