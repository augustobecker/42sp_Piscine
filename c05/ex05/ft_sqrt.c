/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:50:40 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 16:02:00 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sqrt_binary_search(int nb, int min, int max)
{
	int	middle;

	middle = (max / 2) - min;
	if (min > max)
		return (0);
	middle = (min + max) / 2;
	if (middle * middle == nb)
		return (middle);
	else if (middle * middle > nb)
		return (sqrt_binary_search(nb, min, middle - 1));
	else
		return (sqrt_binary_search(nb, middle + 1, max));
	return (0);
}

int	ft_sqrt(int nb)
{
	int	answer;

	answer = sqrt_binary_search(nb, 1, 46340);
	return (answer);
}
