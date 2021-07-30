/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:57:25 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:57:26 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power >= 0)
	{
		if (power == 0 || nb == 1)
			return (1);
		else
			return (nb * ft_recursive_power(nb, power - 1));
	}
	return (0);
}
