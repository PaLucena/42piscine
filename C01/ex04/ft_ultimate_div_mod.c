/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:05:42 by palucena          #+#    #+#             */
/*   Updated: 2023/02/06 17:27:53 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *a / *b;
	*b = aux % *b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*pt_a;
	int	*pt_b;

	a = 6;
	b = 2;
	pt_a = &a;
	pt_b = &b;
	ft_ultimate_div_mod(pt_a, pt_b);
	printf("División: %i Resto: %i", *pt_a, *pt_b);
	return (0);
}*/
