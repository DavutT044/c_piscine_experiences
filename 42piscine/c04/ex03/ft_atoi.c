/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dturan <dturan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:54:31 by dturan            #+#    #+#             */
/*   Updated: 2024/08/25 19:04:01 by dturan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	nbr;

	i = 0;
	neg = 0;
	nbr = 0;
	while (str[i] && (str[i] < 48 || str[i] > 57))
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	if (neg % 2 == 1)
		nbr = nbr * -1;
	return (nbr);
}