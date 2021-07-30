/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:56:33 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:56:34 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	size_dest;

	i = 0;
	size_dest = 0;
	while (dest[size_dest] != 0)
	{
		size_dest++;
	}
	while (i != n && src[i] != 0)
	{
		dest[size_dest] = src[i];
		i++;
		size_dest++;
	}
	dest[size_dest] = 0;
	return (dest);
}
