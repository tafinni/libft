/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfinni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:30:53 by tfinni            #+#    #+#             */
/*   Updated: 2022/11/28 19:10:09 by tfinni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*res;
	size_t		i;
	size_t		count;
	
	if (!s)
		return (NULL);
	count = ft_strlen(s);
	if (start > count)
		start = count;
	if (len > (count - start))
		len = count - start;
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
