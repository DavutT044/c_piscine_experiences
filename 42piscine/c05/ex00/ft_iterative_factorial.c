/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dturan <dturan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:32:02 by dturan            #+#    #+#             */
/*   Updated: 2024/09/02 15:40:58 by dturan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	total;

	total = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		total *= nb;
		nb--;
	}
	return (total);
}
