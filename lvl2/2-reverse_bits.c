/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-reverse_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 13:42:50 by mbui              #+#    #+#             */
/*   Updated: 2019/05/27 09:37:35 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	return (((octet >> 0) & 1) << 7) | \
	(((octet >> 1) & 1) << 6) | \
	(((octet >> 2) & 1) << 5) | \
	(((octet >> 3) & 1) << 4) | \
	(((octet >> 4) & 1) << 3) | \
	(((octet >> 5) & 1) << 2) | \
	(((octet >> 6) & 1) << 1) | \
	(((octet >> 7) & 1) << 0);
}

unsigned char	reverse_bits2(unsigned char octet)
{
	unsigned char	r;
	unsigned int	len;

	len = 8;
	while (len--)
	{
		r = (r << 1) | (octet & 1);
		octet >>= 1;
	}
	return (r);
}

unsigned char	reverse_bits3(unsigned char octet)
{
	unsigned char	tmp;
	unsigned int	len;

	len = 8;
	tmp = octet;
	while (octet)
	{
		tmp <<= 1;
		tmp |= octet & 1;
		octet >>= 1;
		len--;
	}
	tmp <<= len;
	return (tmp);
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
	c = reverse_bits3(c);
	printf("%c\n", c);
	print_bits(c);
	return (0);
}
