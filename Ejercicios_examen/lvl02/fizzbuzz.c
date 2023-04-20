/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:25:35 by palucena          #+#    #+#             */
/*   Updated: 2023/02/21 16:30:07 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	nb += '0';
	write (1, &nb, 1);
}

int	main(int argc, char **argv)
{
	int	x;

	(void)argc;
	(void)argv;
	x = 1;
	while (x <= 100)
	{
		if (x % 3 == 0)
			write(1, "fizz", 4);
		else if (x % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(x);
		write(1, "\n", 1);
		x++;
	}
	return (0);
}
