/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarroso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:33:38 by tbarroso          #+#    #+#             */
/*   Updated: 2024/06/30 14:57:28 by tbarroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	check_lower(char e)
{
	if ((e >= 'a') && (e <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_lower(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main()
{
	printf("%d\n", ft_str_is_lowercase("ugueygduebd"));
	printf("%d\n", ft_str_is_lowercase("UDUW7"));
	printf("%d\n", ft_str_is_lowercase(""));
	return 0;
}
*/
