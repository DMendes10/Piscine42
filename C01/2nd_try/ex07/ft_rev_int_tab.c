/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 20:25:39 by diomende          #+#    #+#             */
/*   Updated: 2025/01/27 11:52:55 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	z;

	i = 0;
	z = 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - z];
		tab[size - z] = temp;
		i++;
		z++;
	}
}

/*
int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size = 5;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}
*/