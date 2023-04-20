/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:43:02 by palucena          #+#    #+#             */
/*   Updated: 2023/02/04 21:14:27 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char z);

void	rush(int x, int y)
{
	int	c;
	int	f;

	c = 1;
	f = 1;
	while (f <= y)
	{
		while (c <= x)
		{
			if ((f == 1 || f == y) && (c == 1 || c == x))
				ft_putchar('o');
			else if (f == 1 || f == y)
				ft_putchar('-');
			else if (c == 1 || c == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		f++;
		c = 1;
	}
}
