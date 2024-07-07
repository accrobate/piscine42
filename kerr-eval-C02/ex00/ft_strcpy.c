/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarroso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:08:50 by tbarroso          #+#    #+#             */
/*   Updated: 2024/06/25 18:05:12 by tbarroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
	{
	int	o;

	o = 0;
	while (src[o] != '\0')
	{
		dest[o] = src[o];
		o++;
	}
	dest[o] = '\0';
	return (dest);
}

/*int main(void)
{
	char *src = "huz";
	char dest[8];
	ft_strcpy(dest, src);
	printf("%s", src);
}
*/
