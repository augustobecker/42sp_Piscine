/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:54:43 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:54:44 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	counter;
	int	length;

	counter = 0;
	length = 0;
	while (*str != 0)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			counter++;
		str++;
		length++;
	}
	if (counter == length)
		return (1);
	return (0);
}
