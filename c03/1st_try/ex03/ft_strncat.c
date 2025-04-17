/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 15:11:52 by diomende          #+#    #+#             */
/*   Updated: 2025/02/03 19:49:15 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	o;

	i = 0;
	o = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[o] = src[i];
		i++;
		o++;
	}
	dest[o] = '\0';
	return (dest);
}


#include <string.h>
#include <stdio.h>
int main (void)
{
	char stra[4] = "ola";
	char strb[6] = "adeus";
	printf("%s\n", ft_strncat(stra, strb, 4));
}
