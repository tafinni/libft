/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfinni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:37:54 by tfinni            #+#    #+#             */
/*   Updated: 2022/11/28 19:03:46 by tfinni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_connect(char const *s1, char const *s2, char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (s1[x] != '\0')
	{
		str[x] = s1[x];
		x++;
	}
	while (s2[i] != '\0')
	{
		str[x] = s2[i];
		x++;
		i++;
	}
	str[x] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	int		lenght;
	char	*str;

	i = 0;
	x = 0;
	if (!s1 || !s2)
		return (NULL);
	lenght = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * lenght + 1);
	if (!str)
		return (NULL);
	str = ft_connect(s1, s2, str);
	return (str);
}
