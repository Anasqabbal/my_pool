/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:54:34 by anqabbal          #+#    #+#             */
/*   Updated: 2023/09/05 07:52:11 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*buf;

	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	buf = (int *)malloc(sizeof (int) * len);
	if (range == 0)
		return (-1);
	*range = buf;
	i = 0;
	while (min < max)
	{
		buf[i] = min;
		i++;
		min++;
	}
	return (len);
}
