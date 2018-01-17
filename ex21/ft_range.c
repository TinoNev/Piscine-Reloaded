/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchaillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:53:22 by lchaillo          #+#    #+#             */
/*   Updated: 2017/11/07 15:12:34 by lchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (min < max)
	{
		if (!(tab = (int *)malloc(sizeof(*tab) * (max - min) + 1)))
			return (0);
		while (min < max)
		{
			tab[i] = min;
			++min;
			++i;
		}
		tab[i] = '\0';
	}
	else
		tab = 0;
	return (tab);
}
