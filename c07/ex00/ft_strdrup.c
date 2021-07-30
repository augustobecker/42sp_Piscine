/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdrup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 11:58:52 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/30 11:10:28 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*p;

	length = 1;
	i = 0;
	while (src[length])
		++length;
	p = malloc(length * sizeof(char));
	while (src[i])
	{
		p[i] = src[i];
		++i;
	}
	p[i] = 0;
	return (p);
}
