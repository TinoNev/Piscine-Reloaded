/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchaillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:09:13 by lchaillo          #+#    #+#             */
/*   Updated: 2017/11/07 13:19:00 by lchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		x;

	x = 0;
	while (str[x] != '\0')
		++x;
	return (x);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		x;

	x = 0;
	len = ft_strlen(src);
	if (src != 0)
	{
		if (!(dest = (char *)malloc(sizeof(*dest) * len + 1)))
			return (0);
		while (src[x] != '\0')
		{
			dest[x] = src[x];
			++x;
		}
		dest[x] = '\0';
		return (dest);
	}
	else
		return (0);
}
