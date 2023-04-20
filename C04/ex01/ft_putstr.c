/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:37:17 by palucena          #+#    #+#             */
/*   Updated: 2023/02/15 13:37:22 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write (1, str, 1);
		str++;
	}	
}

/*int	main(void)
{
	char	*pt_c;

	pt_c = "Cadena de prueba";
	ft_putstr(pt_c);
	return (0);
}*/
