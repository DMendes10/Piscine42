/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:39:26 by diomende          #+#    #+#             */
/*   Updated: 2025/02/05 17:13:14 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	o;

	i = 0;
	o = 1;
	while (o < argc)
	{
		while (argv[o][i] != '\0')
		{
			write (1, &argv[o][i], 1);
			i++;
		}
		write (1, "\n", 1);
		i = 0;
		o++;
	}
	return (0);
}
