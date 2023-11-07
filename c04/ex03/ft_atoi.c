/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:44:27 by anqabbal          #+#    #+#             */
/*   Updated: 2023/08/30 11:02:48 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	to_check(int fi_re, int c_s)
{
	if (c_s % 2 == 0)
		return (fi_re);
	else
		return (fi_re *= (-1));
}

int	ft_atoi(char *str)
{
	int	i;
	int	c_s;
	int	fi_re;

	c_s = 0;
	i = 0;
	fi_re = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			c_s++;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			fi_re = fi_re * 10 + (str[i] - '0');
		else
			break ;
		i++;
	}
	return (to_check(fi_re, c_s));
}
