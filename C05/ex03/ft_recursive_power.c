/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:41:31 by palucena          #+#    #+#             */
/*   Updated: 2023/02/19 18:53:50 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursivity(int nb, int power, int orig)
{
	nb *= orig;
	if (power > 1)
		return (ft_recursivity(nb, power - 1, orig));
	return (nb);
}

int	ft_recursive_power(int nb, int power)
{
	int	orig;

	orig = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		return (ft_recursivity(nb, power - 1, orig));
	return (nb);
}

/* int	main(void)
{
	printf("%i", ft_recursive_power(2, 4));
	return (0);
}
 */