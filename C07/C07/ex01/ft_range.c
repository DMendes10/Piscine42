/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:40:36 by diomende          #+#    #+#             */
/*   Updated: 2025/04/08 20:36:11 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*a;
	int	len;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	a = (int *)malloc(sizeof(int) * len);
	while (i < len)
	{
		a[i] = min + i;
		i++;
	}
	return (a);
}
// #include <stdio.h>
// int main (void)
// {
// 	int i = 0;
// 	int min = -10;
// 	int max = -5;
// 	int *array = ft_range (min, max);
// 	while (i < (max - min))
// 	{
// 		printf("%d\n", array[i]);
// 		i++;
// 	}
// }
