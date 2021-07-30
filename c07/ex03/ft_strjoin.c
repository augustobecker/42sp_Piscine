/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 12:13:49 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/30 12:42:20 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_total_length(char **strs, int size)
{
	int i;
	int j;
	int counter;
	
	i = 0;
	j = 0;
	counter = 0;
	while (strs[i] > size)
	{
		while (str[i][j])
		{
			++counter;
			++j;
		}
		++i;
	}
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != 0)
	{
		++str;
		++length;
	}
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	total_length;
	
	total_length = 0;
	total_length += ft_total_length(strs, size);
	j = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != 0)
		{
			
			++i;
		}
		strs[j][i] = 0;
		++j;
	}
}
