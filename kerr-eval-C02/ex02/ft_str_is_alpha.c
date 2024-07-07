/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarroso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:25:19 by tbarroso          #+#    #+#             */
/*   Updated: 2024/07/01 15:24:48 by tbarroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	check_alpha(char s)
{
	if ((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!check_alpha(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
	printf("%d\n", ft_str_is_alpha("repo"));
	printf("%d\n", ft_str_is_alpha("ER12S"));
	printf("%d\n", ft_str_is_alpha(""));
	return 0;
}
*/
