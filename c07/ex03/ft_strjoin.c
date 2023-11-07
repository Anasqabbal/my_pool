/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:47:38 by anqabbal          #+#    #+#             */
/*   Updated: 2023/09/05 15:21:05 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	fstrlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	calcule_full_lenght(char **strs, char *sep, int size)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (i < size)
	{
		res = res + fstrlen(strs[i]);
		if (i < size - 1)
			res = res + fstrlen(sep);
		i++;
	}
	return (res);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		res;
	char	*buf;

	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof (char)));
	res = calcule_full_lenght(strs, sep, size);
	buf = (char *)malloc(sizeof (char) * res + 1);
	if (buf == 0)
		return (0);
	buf[0] = '\0';
	while (i < size)
	{
		ft_strcat(buf, strs[i]);
		if (i + 1 < size)
			ft_strcat(buf, sep);
		i++;
	}
	return (buf);
}

#include<stdio.h>

int main()
{
	int size = 3;
	char *strs[]={"hello", "ana", "anas"};
	char *sep =" ";
	char *y = ft_strjoin(size, strs,sep);
	printf("%s", y);
}
