/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 15:08:54 by diomende          #+#    #+#             */
/*   Updated: 2025/02/03 19:44:25 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	o;

	o = 0;
	i = ft_strlen(dest);
	while (src [o] != '\0')
	{
		dest[i] = src[o];
		i++;
		o++;
	}
	dest[i] = '\0';
	return (dest);
}


#include <string.h>
#include <stdio.h>
int main (void)
{
	char stra[8] = "ola";
	char strb[] = "adeus";
	printf("%s \n", ft_strcat(stra, strb));
}
