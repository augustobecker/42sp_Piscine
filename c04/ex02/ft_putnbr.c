/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:56:58 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:56:59 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(int a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	int	soma;

	soma = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		if (nb == -2147483648)
		{
			nb--;
			soma = 1;
		}
	}
	if (nb < 10)
		ft_putchar(nb + 48 + soma);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10 + soma);
	}	
}
