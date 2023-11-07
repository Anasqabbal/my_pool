/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:30:16 by anqabbal          #+#    #+#             */
/*   Updated: 2023/08/28 10:10:00 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	j = 0;
	k = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		k = i;
		while (str[k] == to_find[j])
		{
			if (str[k] == to_find[j] && to_find[j + 1] == '\0')
				return (str + i);
			k++;
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
