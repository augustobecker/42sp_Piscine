/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:55:16 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/30 14:15:49 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char str)
{
	if ((str >= '0' && str <= '9') || (str >= 'A' && str <= 'Z')
		|| (str >= 'a' && str <= 'z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		str[i] -= 32;
	while (str[i + 1])
	{
		if (is_alphanumeric(str[i]) == 1)
		{
			if (is_alphanumeric(str[i - 1]) == 0
				&& str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			if (is_alphanumeric(str[i - 1]) == 1 && str[i] >= 'A'
				&& str[i] <= 'Z')
				str[i] += 32;
		}
		++i;
	}
	return (str);
}
