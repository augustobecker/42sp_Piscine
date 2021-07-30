/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:54:13 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:54:14 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temporary;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (*(tab + i) > *(tab + j))
			{
				temporary = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = temporary;
			}
			++j;
		}
		++i;
	}
}
