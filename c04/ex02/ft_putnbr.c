/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:53:39 by anqabbal          #+#    #+#             */
/*   Updated: 2023/08/28 15:01:57 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	nr;

	nr = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		nr = nb * (-1);
	}
	if (nr > 9)
	{
		ft_putnbr(nr / 10);
		ft_putnbr(nr % 10);
	}
	if (nr <= 9 && nr >= 0)
	{
		nr += '0';
		write(1, &nr, 1);
	}
}
int main ()
{
	ft_putnbr(-42);
}
