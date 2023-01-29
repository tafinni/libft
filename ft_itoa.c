/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfinni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:14:48 by tfinni            #+#    #+#             */
/*   Updated: 2023/01/10 15:06:58 by tfinni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int	ft_intlen(int n)
{
	int	intlen;
	
	if (n == 0)
		return (1);
	intlen = 0;
	if (n < 0)
	{
		intlen++;
		n = -n;
	}
	while (n)
	{
		intlen++;
		n = n / 10;
	}
	return (intlen);
}

static char	*ft_minint(char *s)
{
	char	*minint;
	int	i;

	minint = "-2147483648";
	i = 0;
	while (minint[i] != '\0')
	{
		s[i] = minint[i];
		i++;
	}		
	return (s);
}

char	*ft_itoa(int n)
{
	char		*s;
	int		len;

	len = ft_intlen(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len--] = '\0';
	if (n < -2147483647)
		return (ft_minint(s));
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	if (n == 0)
		s[0] = '0';
	while (n > 0)
	{
		s[len] = ('0' + (n % 10));
		n = n / 10;
		len--;
	}
	return (s);
}

