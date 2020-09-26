/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 13:41:38 by mbui              #+#    #+#             */
/*   Updated: 2019/05/09 13:58:32 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}

void			print_bits(unsigned char octet)
{
	int div;
	int oct;

	div = 128;
	oct = octet;
	while (div != 0)
	{
		if (div <= oct)
		{
			write(1, "1", 1);
			oct = oct % div;
		}
		else
			write(1, "0", 1);
		div = div / 2;
	}
}

int				main(void)
{
	char c;

	c = 't';
	printf("%c\n", c);
	print_bits(c);
	printf("\n");
	c = swap_bits(c);
	printf("%c\n", c);
	print_bits(c);
	return (0);
}
