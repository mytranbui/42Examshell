/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5-rpn_calc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 10:51:12 by mbui              #+#    #+#             */
/*   Updated: 2019/06/17 17:41:38 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	space(char c)
{
	return (c == ' ');
}

int	digits(char c)
{
	return (c >= '0' && c <= '9');
}

int	operators(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}

int	do_op(int a,int b, char c)
{
	if (c == '+')
		return (a + b);
	else if (c == '-')
		return (a - b);
	else if (c == '*')
		return (a * b);
	else if (c == '/')
		return (a / b);
	else if (c == '%')
		return (a % b);
	return (0);
}

int	rpn_calc(char *s)
{
	int res;

	res = 0;
	while (*s)
	{
		if (operators(*s))
			res += do_op(atoi(s - 4), atoi(s - 2), *s);
		s++;
	}
	return (res);
}
//wrong

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d\n", rpn_calc(argv[1]));
	else
		printf("Error\n");
	return (0);
}
