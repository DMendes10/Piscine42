/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 15:14:18 by diomende          #+#    #+#             */
/*   Updated: 2025/02/03 19:52:53 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcompare(char *palheiro, char *agulha)
{
	int	i;

	i = 0;
	while (agulha[i] != '\0')
	{
		if (agulha[i] != palheiro[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (ft_strcompare(&str[i], to_find))
				return (&str[i]);
		}
		i++;
	}
	return (0);
}


#include <stdio.h>
int main (void)
{
	char palheiro[]= "mas e lissabona ou lisboa entao?";
	char agulha[]= "lisboa";
	printf("%s", ft_strstr(palheiro, agulha));
}
