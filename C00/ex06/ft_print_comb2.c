/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:18:22 by palucena          #+#    #+#             */
/*   Updated: 2023/02/05 11:37:03 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	x;
	int	y;
	int	aux;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			aux = x / 10 + '0';
			write (1, &aux, 1);
			aux = x % 10 + '0';
			write (1, &aux, 1);
			write (1, " ", 1);
			aux = y / 10 + '0';
			write (1, &aux, 1);
			aux = y % 10 + '0';
			write (1, &aux, 1);
			if (x != 98)
				write (1, ", ", 2);
			y++;
		}
	x++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
