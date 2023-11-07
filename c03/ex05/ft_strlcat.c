/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:07:11 by anqabbal          #+#    #+#             */
/*   Updated: 2023/08/26 19:15:02 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dl;
	unsigned int	ii;
	unsigned int	sl;

	dl = ft_strlen(dest);
	sl = ft_strlen(src);
	if (size <= dl)
		return (size + sl);
	ii = 0;
	while (src[ii] != '\0' && dl + 1 < size)
	{
		dest[dl] = src[ii];
		dl++;
		ii++;
	}
	dest[dl] = '\0';
	return (dl + ft_strlen(&src[ii]));
}
