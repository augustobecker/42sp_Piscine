/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:52:30 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:52:32 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 48;
	while (num1 <= 55)
	{
		num2 = num1 + 1;
		while (num2 <= 56)
		{
			num3 = num2 + 1;
			while (num3 <= 57)
			{
				write(1, &num1, 1);
				write(1, &num2, 1);
				write(1, &num3, 1);
				if (num1 != 55)
					write(1, ", ", 2);
				++num3;
			}
			++num2;
		}
		num1++;
	}
}
