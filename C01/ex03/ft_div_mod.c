/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:07:15 by palucena          #+#    #+#             */
/*   Updated: 2023/02/06 14:33:25 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	res_div;
	int	res_mod;
	int	*div;
	int	*mod;

	a = 6;
	b = 2;
	div = &res_div;
	mod = &res_mod;
	ft_div_mod(a, b, div, mod);
	printf("División: %i Resto: %i", res_div, res_mod);
	return (0);
}*/
