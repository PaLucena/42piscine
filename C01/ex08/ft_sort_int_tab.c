/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:15:00 by palucena          #+#    #+#             */
/*   Updated: 2023/02/06 23:36:22 by palucena         ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size -1)
	{
		if (*(tab + i) > *(tab + i + 1))
		{
			ft_swap((tab + i), (tab + i + 1));
			i = -1;
		}
		i++;
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
	ft_sort_int_tab(tab, num);
	i = 0;
	while (i < num)
	{
		printf("%i ", array_a[i]);
		i++;
	}
	return (0);
}
*/