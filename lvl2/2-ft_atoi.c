/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-ft_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 16:53:24 by mbui              #+#    #+#             */
/*   Updated: 2019/05/30 15:17:49 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int		n;
	double	r;

	while (*str == '\t' || *str == '\n' || *str == '\r' || *str == '\f' ||
			*str == '\v' || *str == ' ')
		str++;
	if (*str == '-')
		n = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
		r = r * 10 + *str++ - 48;
	if (n == -1)
		r = -r;
	return (r);
}

int	main(void)
{
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", atoi("2147483647"));
	printf("%d\n", ft_atoi("   -1745h158145"));
	printf("%d\n", atoi("   -1745h158145"));
	return (0);
}
