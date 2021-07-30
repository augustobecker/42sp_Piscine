/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 12:16:22 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/30 11:12:50 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	lenght;
	int	i;
	int	*p;

	i = 0;
	p = NULL;
	if (min >= max)
		return (p);
	lenght = max - min;
	p = malloc(lenght * sizeof(int));
	while (i < lenght)
	{
		p[i] = min;
		++i;
		++min;
	}
	return (p);
}
