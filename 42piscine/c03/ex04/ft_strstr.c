/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dturan <dturan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 19:41:33 by dturan            #+#    #+#             */
/*   Updated: 2024/08/25 14:09:46 by dturan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	kontrol;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			kontrol = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					kontrol = 1;
				i++;
			}
			if (kontrol == 0)
				return (str);
		}
		str ++;
	}
	return (0);
}
