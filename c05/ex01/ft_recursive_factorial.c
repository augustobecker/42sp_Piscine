/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:57:17 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:57:18 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	answer;

	answer = 0;
	if (nb == 0)
	{
		answer = 1;
		return (answer);
	}
	else if (nb > 0)
		answer = nb * ft_recursive_factorial(nb - 1);
	return (answer);
}
