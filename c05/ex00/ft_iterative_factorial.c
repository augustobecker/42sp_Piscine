/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:57:13 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:57:14 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	answer;

	answer = 1;
	while (nb > 0)
	{
		answer *= nb;
		--nb;
	}
	if (nb < 0)
		answer = 0;
	return (answer);
}
