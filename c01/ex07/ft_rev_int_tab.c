/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:54:09 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:54:10 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temporary;
	int	i;
	int	s;

	i = 0;
	s = size - 1;
	while (i < s)
	{
		temporary = *(tab + i);
		*(tab + i) = *(tab + s);
		*(tab + s) = temporary;
		i++;
		s--;
	}
}
