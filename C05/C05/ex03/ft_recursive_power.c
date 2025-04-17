/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:49:14 by diomende          #+#    #+#             */
/*   Updated: 2025/02/04 18:54:02 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = result * ft_recursive_power(result, power -1);
	return (result);
}

/*
#include <stdio.h>
int main (void)
{
	int a = 5;
	int p = 2;

	printf("%d", ft_recursive_power(a, p));
}
*/