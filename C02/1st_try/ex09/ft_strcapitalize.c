/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:17:17 by diomende          #+#    #+#             */
/*   Updated: 2025/01/29 12:02:46 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			i++;
		}
		if ((str[i] <= 47 || str[i] >= 58) && (str[i] <= 96 || str[i] >= 123))
			if (!(str[i] >= 65 && str[i] <= 90))
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
					str[i + 1] = str[i + 1] - 32;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>
int main(void)
{
	char strga[] = "-ol5A av-alIHSGSV4ADFDFDF&or b0Oa so%rte~";
	printf(	"%s", ft_strcapitalize(strga));
}
*/