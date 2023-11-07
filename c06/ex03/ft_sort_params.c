/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 10:05:06 by anqabbal          #+#    #+#             */
/*   Updated: 2023/09/03 15:47:47 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	to_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	k;

	k = 0;
	while (s1[k] && s2[k] && s1[k] == s2[k])
	{
		k++;
	}
	return (s1[k] - s2[k]);
}

int	main(int ac, char **av)

{
	char	*s;
	int		i;
	int		j;

	j = 1;
	while (j < (ac - 1))
	{
		if (ft_strcmp(av[j], av[j + 1]) > 0)
		{
			s = av[j];
			av[j] = av[j + 1];
			av[j + 1] = s;
			j = 1;
		}
		j++;
	}
	i = 1;
	while (i < ac)
	{
		to_print(av[i]);
		to_print("\n");
		i++;
	}
}
