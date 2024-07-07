/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarroso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:59:53 by tbarroso          #+#    #+#             */
/*   Updated: 2024/06/24 19:29:16 by tbarroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)*
  {
	int a;
	int b;
	int x;
	int y;

	a = 105;
	b = 10;
	ft_div_mod(a, b, &x, &y);
	printf("div: %d\n", x);
	printf("mod: %d/n", y);
	return (0);
}
*/
