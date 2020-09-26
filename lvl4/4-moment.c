/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4-moment.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:43:35 by mbui              #+#    #+#             */
/*   Updated: 2019/06/10 12:18:04 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int				ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char			*ft_strcat(char *s1, char *s2)
{
	char	*ret;
	int		i;

	i = 0;
	if (!(ret = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (*s1)
		ret[i++] = *s1++;
	while (*s2)
		ret[i++] = *s2++;
	ret[i] = '\0';
	return (ret);
}

unsigned int	ft_uintlen(unsigned int n)
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

char			*ft_utoa(unsigned int n)
{
	char	*ret;
	int		len;

	len = ft_uintlen(n);
	if (!(ret = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	ret[len] = '\0';
	while (n)
	{
		ret[--len] = n % 10 + 48;
		n /= 10;
	}
	return (ret);
}

char			*moment(unsigned int duration)
{
	if (duration == 0)
		return ("0 seconds ago.");
	if (duration == 1)
		return ("1 second ago.");
	if (duration < 60)
		return (ft_strcat(ft_utoa(duration), " seconds ago."));
	else if (duration < 120)
		return ("1 minute ago.");
	else if (duration < 3600)
		return (ft_strcat(ft_utoa(duration / 60), " minutes ago."));
	else if (duration < 7200)
		return ("1 hour ago.");
	else if (duration < 86400)
		return (ft_strcat(ft_utoa(duration / 3600), " hours ago."));
	else if (duration < 172800)
		return ("1 day ago.");
	else if (duration < 2592000)
		return (ft_strcat(ft_utoa(duration / 86400), " days ago."));
	else if (duration < 5184000)
		return ("1 month ago.");
	else
		return (ft_strcat(ft_utoa(duration / 2592000), " months ago."));
}

int				main(void)
{
	printf("%s\n", moment(0));
	printf("%s\n", moment(1));
	printf("%s\n", moment(30));
	printf("%s\n", moment(65));
	printf("%s\n", moment(119));
	printf("%s\n", moment(120));
	printf("%s\n", moment(2400));
	printf("%s\n", moment(3735));
	printf("%s\n", moment(117863248));
	printf("%s\n", moment(0));
	return (0);
}
