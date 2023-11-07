/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anqabbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:53:45 by anqabbal          #+#    #+#             */
/*   Updated: 2023/08/19 22:35:33 by anqabbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	just_print(int j, int jj, int i, int ii)
{
	write(1, &j, 1);
	write(1, &jj, 1);
	write(1, " ", 1);
	write(1, &i, 1);
	write(1, &ii, 1);
	if (!(j == '9' && jj == '8' && i == '9' && ii == '9'))
		write(1, ", ", 2);
}

void	just_another_while(char j, char jj, char i, char ii)
{
	while (i <= '9')
	{
		ii = jj + 1;
		while (ii <= '9')
		{
			just_print(j, jj, i, ii);
			ii++;
		}
		i++;
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	ii;
	int	j;
	int	jj;

	i = '1';
	j = '0';
	while (j <= '9')
	{
		jj = '0';
		while (jj <= '9')
		{
			i = j;
			ii = jj + 1;
			just_another_while(j, jj, i, ii);
			jj++;
		}
		j++;
	}
}
int main()
{
		ft_print_comb2();
}





