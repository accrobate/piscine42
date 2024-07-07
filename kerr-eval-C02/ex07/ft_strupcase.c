/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarroso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 19:28:50 by tbarroso          #+#    #+#             */
/*   Updated: 2024/06/30 20:44:27 by tbarroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' )
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int main()
{
	char str[] = "hey, alex!";
	printf("normal: %s\n", str);
	printf("uppercase: %s\n", ft_strupcase(str));

	return 0;
	}
*/	
