/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:54:39 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:54:40 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (src[counter] != 0 && counter < n)
	{
		dest[counter] = src[counter];
		++counter;
	}
	while (counter < n)
	{
		dest[counter] = 0;
		++counter;
	}
	return (dest);
}
