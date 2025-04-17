/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:49:36 by diomende          #+#    #+#             */
/*   Updated: 2025/02/11 15:03:35 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*soma_arg(int size, char **str, char *sep)
{
	int		sum;
	int		o;
	char	*space;

	o = 0;
	if (size <= 0)
		sum = 1;
	else
	{
		while (o < size)
		{
			sum = sum + ft_strlen(str[o]);
			o++;
		}
		sum = sum + (ft_strlen(sep) * size -1);
	}
	space = malloc (sizeof(char) * sum);
	if (space == NULL)
		return (0);
	return (space);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		o;
	int		x;
	char	*array;

	o = 0;
	i = 0;
	x = 0;
	array = soma_arg(size, strs, sep);
	while (o < size -1)
	{
		i = 0;
		while (strs[o][i] != '\0')
			array[x++] = strs[o][i++];
		i = 0;
		while (sep[i] != '\0')
			array[x++] = sep[i++];
		o++;
	}
	i = 0;
	if (size != 0)
		while (strs[size -1][i] != '\0')
			array[x++] = strs[o][i++];
	array[x] = '\0';
	return (array);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
//  char *strs[] = {"ola", "avaliador", "isto_esta", "certo", "juro", "joca"};
// 	int size = 6;
// 	char *sep = "; ";
// 	char	*tudo = ft_strjoin(size, strs, sep);

// 	printf("nova string: %s\n", tudo);
// 	free(tudo);
// }