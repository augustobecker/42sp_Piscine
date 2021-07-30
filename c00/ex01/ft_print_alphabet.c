/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:51:43 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:51:46 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_alphabet(void)
{
	char	alphabet_lower_case;
	int		i;

	alphabet_lower_case = 'a';
	i = 0;
	while (i < 26)
	{
		write(1, &alphabet_lower_case, sizeof(char));
		++alphabet_lower_case;
		++i;
	}
}
