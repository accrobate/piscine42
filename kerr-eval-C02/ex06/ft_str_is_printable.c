/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarroso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 17:11:40 by tbarroso          #+#    #+#             */
/*   Updated: 2024/07/03 13:30:24 by tbarroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main() 
{
   	printf("%d\n", ft_str_is_printable("Bonjour!"));
	printf("%d\n", ft_str_is_printable("Bonjour\n"));
	printf("%d\n", ft_str_is_printable("12345"));
    return 0;
}
*/
