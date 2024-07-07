/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarroso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:20:47 by tbarroso          #+#    #+#             */
/*   Updated: 2024/06/25 18:04:58 by tbarroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	mag;

	mag = 0;
	while (src[mag] != '\0' && mag < n)
	{
		dest[mag] = src[mag];
		mag++;
	}
	while (mag < n)
	{
		dest[mag] = '\0';
		mag++;
	}
	return (dest);
}

/*int main(void)
{
	char *src = "salut";
	char dest[10];
	int mag = 10;
	ft_strncpy(dest, src, mag);
	printf("%s", dest);
}
*/
