/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:49:52 by diomende          #+#    #+#             */
/*   Updated: 2025/02/04 18:59:34 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (1);
	while (i < nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main (void)
{
	int a = 1;
	printf ("%d", ft_sqrt(a));
}
*/