/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:25:28 by palucena          #+#    #+#             */
/*   Updated: 2023/02/10 10:57:18 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != 0)
	{
		str++;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	int		i;
	char	*str;

	str = "Cadena de prueba";
	i = ft_strlen(str);
	printf("Número de caracteres: %i", i);
	return (0);
}*/