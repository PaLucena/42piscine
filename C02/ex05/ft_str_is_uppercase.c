/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 23:04:26 by palucena          #+#    #+#             */
/*   Updated: 2023/02/12 22:46:36 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	x;

	x = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			x = 0;
		i++;
	}
	return (x);
}

/* int	main(void)
{
	int		x;
	char	cad[] = "SDFGUIOP";
	char	*str;

	str = &cad[0];
	x = ft_str_is_uppercase(str);
	x += '0';
	write (1, &x, 1);
	return (0);
}
 */