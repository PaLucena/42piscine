/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:04:23 by palucena          #+#    #+#             */
/*   Updated: 2023/02/07 12:34:03 by palucena         ###   ########.fr       */
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
