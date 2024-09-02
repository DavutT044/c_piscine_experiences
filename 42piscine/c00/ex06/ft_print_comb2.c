/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dturan <dturan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:34:14 by dturan            #+#    #+#             */
/*   Updated: 2024/08/19 02:00:13 by dturan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

char	ft_bs(int c, int b)
{
	char	ex;

	ex = '0';
	if (b == 1)
		ex = c / 10 + '0';
	else
	{
		ex = c % 10 + '0';
	}
	return (ex);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write(ft_bs(a, 1));
			ft_write(ft_bs(a, 0));
			write(1, " ", 1);
			ft_write(ft_bs(b, 1));
			ft_write(ft_bs(b, 0));
			if (!(a == 98 && b == 99))
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

int main(){
	ft_print_comb2();
}
