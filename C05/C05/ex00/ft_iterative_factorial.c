/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:48:18 by diomende          #+#    #+#             */
/*   Updated: 2025/02/04 18:48:28 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (result);
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb = nb - 1;
	}
	return (result);
}

/*
#include <stdio.h>
int main (void)
{
	int a = 10;
	printf("%d", ft_iterative_factorial(a));
}
*/