/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:57:22 by palucena          #+#    #+#             */
/*   Updated: 2023/02/06 14:06:35 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*int	main(void)
{
	int	a;
	int	b;
	int *pt_a;
	int	*pt_b;

	a = 42;
	b = 24;
	pt_a = &a;
	pt_b = &b;
	ft_swap(pt_a, pt_b);
	printf("%i %i", a, b);
	return (0);
}*/
