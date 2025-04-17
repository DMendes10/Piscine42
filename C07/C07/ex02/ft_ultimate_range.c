/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:48:32 by diomende          #+#    #+#             */
/*   Updated: 2025/02/11 14:49:07 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * size);
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	if (*range == NULL)
		return (-1);
	return (size);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	u;
// 	int	*ptr;
// 	int	**ptr2;
// 	int i;
// 	int min = -10;
// 	int max = 10;

// 	i = 0;
// 	u = 0;
// 	ptr = &u;
// 	ptr2 = &ptr;
// 	printf("%i\n", ft_ultimate_range(ptr2, min, max));
// 	while (i < (max - min))
// 	{
// 		printf("%d\n", ptr[i]);
// 		i++;
// 	}
// 	return (0);
// }