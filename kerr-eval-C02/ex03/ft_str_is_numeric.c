/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarroso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:41:46 by tbarroso          #+#    #+#             */
/*   Updated: 2024/07/02 18:51:52 by tbarroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	check_numeric(char t)
{
	if ((t >= '0') && (t <= '9'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{	
	unsigned int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!(check_numeric(str[a])))
		{	
			return (0);
		}
	a++;
	}
	return (1);
}
/*int main()
{
	printf("%d\n", ft_str_is_numeric("022"));
	printf("%d\n", ft_str_is_numeric("oua2"));
	printf("%d\n", ft_str_is_numeric(""));
	return 0;
}
*/
