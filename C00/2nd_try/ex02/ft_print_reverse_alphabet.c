/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:39:59 by diomende          #+#    #+#             */
/*   Updated: 2025/01/25 19:45:39 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	index;

	index = 'z';
	while (index >= 'a')
	{
		write (1, &index, 1);
		index--;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/