/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:49:09 by palucena          #+#    #+#             */
/*   Updated: 2023/02/06 23:14:07 by palucena         ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		ft_swap((tab + i), (tab + j));
		i++;
		j--;
	}
}

/*int	main(void)
{
	int	array_a[6] = {12, 40, 3, 17, 0, -5};
	int	*tab;
	int	i;
	int	num;

	num = 6;
	tab = &array_a[0];
	ft_rev_int_tab(tab, num);
	i = 0;
	while (i < num)
	{
		printf("%i ", array_a[i]);
		i++;
	}
	return (0);
}
*/