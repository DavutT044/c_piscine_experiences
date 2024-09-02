/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dturan <dturan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:29:48 by dturan            #+#    #+#             */
/*   Updated: 2024/08/22 20:03:22 by dturan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	kontrol;

	i = 0;
	kontrol = 1;
	ft_lowercase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			if (kontrol == 1)
				str[i] -= 32;
			kontrol = 0;
		}
		else if ((str[i] >= '0') && (str[i] <= '9'))
			kontrol = 0;
		else
			kontrol = 1;
		i++;
	}
	return (str);
}
