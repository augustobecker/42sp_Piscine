/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:53:54 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:53:55 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	value_a;
	int	value_b;

	value_a = *a;
	value_b = *b;
	*a = value_a / value_b;
	*b = value_a % value_b;
}
