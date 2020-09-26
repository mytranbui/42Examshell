/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-print_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 12:05:19 by mbui              #+#    #+#             */
/*   Updated: 2019/05/20 13:04:25 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int n)
{
	char	*str;
	char	s2[8 + 1];
	int		k;

	k = 0;
	str = "0123456789abcdef";
	if (n == 0)
		write(1, "0", 1);
	while (n)
	{
		s2[k] = str[n % 16];
		n /= 16;
		k++;
	}
	while (k--)
		write(1, &s2[k], 1);
}

int		ft_atoi(char *str)
{
	int n;
	int r;

	n = 0;
	r = 0;
	while (*str == '\t' || *str == '\n' || *str == '\r' || *str == '\f'
	|| *str == '\v' || *str == ' ')
		str++;
	if (*str == '-')
		n = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		r = r * 10 + *str - 48;
		str++;
	}
	if (n == -1)
		r = -1;
	return (r);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
