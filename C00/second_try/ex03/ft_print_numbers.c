/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:40:04 by diomende          #+#    #+#             */
/*   Updated: 2025/01/25 16:59:00 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	index;

	index = '0';
	while (index <= '9')
	{
		write (1, &index, 1);
		index++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
}
*/