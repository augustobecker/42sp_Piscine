/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:56:29 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:56:30 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	size_d;
	int	i;

	size_d = 0;
	i = 0;
	while (dest[size_d] != 0)
	{
		++size_d;
	}
	while (src[i] != 0)
	{
		dest[size_d] = src[i];
		i++;
		size_d++;
	}
	dest[size_d] = 0;
	return (dest);
}
