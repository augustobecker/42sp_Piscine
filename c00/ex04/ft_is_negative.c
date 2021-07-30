/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:52:19 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:52:21 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_is_negative(int n)
{
	char	value;

	if (n >= 0)
	{
		value = 'P';
		write(1, &value, 1);
	}
	else
	{
		value = 'N';
		write(1, &value, 1);
	}
}
