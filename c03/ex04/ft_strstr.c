/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:56:37 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:56:38 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	find;

	i = 0;
	find = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i] != 0)
	{
		while (str[i + find] == to_find[find])
		{
			if (to_find[find + 1] == 0)
				return (str + i);
			++find;
		}
		++i;
	}
	return (0);
}
