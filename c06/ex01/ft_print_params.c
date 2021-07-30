/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:58:31 by acesar-l          #+#    #+#             */
/*   Updated: 2021/07/29 09:58:32 by acesar-l         ###   ########.fr       */
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
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != 0)
		{
			ft_print_argv(argv[j][i]);
			++i;
		}
		argv[j][i] = 0;
		write(1, "\n", 1);
		++j;
	}
}
