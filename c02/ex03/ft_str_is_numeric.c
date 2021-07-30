/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:54:48 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:54:50 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	counter;
	int	length;

	counter = 0;
	length = 0;
	while (*str != '\0')
	{
		if (*str < 58 && *str > 47)
			counter++;
		length++;
		str++;
	}
	if (counter == length)
		return (1);
	return (0);
}
