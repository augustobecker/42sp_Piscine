/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:55:29 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/30 12:56:36 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int cpy;
	
	i = 0;
	cpy = 0;
	if (size == 0)
		return (0);
	while (src[cpy])
	{
		++cpy;
	}
	while (src[i] && size)
	{
		dest[i] = src[i];
		++i;
		--size;
	}
	dest[i] = 0;
	return (cpy);
}
