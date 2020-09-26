/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-print_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <mbui@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 09:46:29 by mbui              #+#    #+#             */
/*   Updated: 2019/05/17 08:01:32 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
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
			oct %= div;
		}
		else
			write(1, "0", 1);
		div /= 2;
	}
}

int main(void)
{
	print_bits(2);
	return (0);
}
