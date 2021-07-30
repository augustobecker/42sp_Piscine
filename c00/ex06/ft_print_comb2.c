/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:52:41 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:52:43 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_char2(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_put_nbr(int nbr, int max)
{
	char	tens;
	char	units;

	if (nbr <= 9)
	{
		units = nbr + 48;
		ft_print_char2('0', units);
	}
	else if (nbr <= max)
	{
		units = (nbr % 10) + 48;
		tens = (nbr / 10) + 48;
		ft_print_char2(tens, units);
	}
}

void	ft_print_comb2(void)
{
	int	first;
	int	secnd;

	first = 0;
	while (first <= 98)
	{
		secnd = first + 1;
		while (secnd <= 99)
		{
			ft_put_nbr(first, 98);
			write(1, " ", 1);
			ft_put_nbr(secnd, 99);
			if (first != 98)
				ft_print_char2(',', ' ');
			secnd++;
		}
		first++;
	}
}
