/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:57:47 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:58:26 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_argv(char a)
{
	write(1, &a, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 1)
		return (0);
	while (argv[0][i] != 0)
	{
		ft_print_argv(argv[0][i]);
		++i;
	}
	argv[i] = 0;
	write(1, "\n", 1);
	return (0);
}
