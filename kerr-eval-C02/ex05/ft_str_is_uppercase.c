/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarroso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 14:45:30 by tbarroso          #+#    #+#             */
/*   Updated: 2024/06/30 14:58:11 by tbarroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	check_upper(char E)
{
	if ((E >= 'A') && (E <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_upper(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main()
{
	printf("%d\n", ft_str_is_uppercase("SDF"));
	printf("%d\n", ft_str_is_uppercase("7up"));
	printf("%d\n", ft_str_is_uppercase(""));
	return 0;
}
*/
