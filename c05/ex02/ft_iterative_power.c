/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:57:21 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:57:22 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	answer;

	answer = 1;
	if (power == 0 || nb == 1)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	if (power == 1)
		return (nb);
	while (power > 0)
	{
		answer *= nb;
		--power;
	}
	return (answer);
}
