/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 23:04:26 by palucena          #+#    #+#             */
/*   Updated: 2023/02/12 22:43:07 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	x;

	x = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			x = 0;
		i++;
	}
	return (x);
}

/* int	main(void)
{
	int		x;
	char	cad[] = "wertyuio";
	char	*str;

	str = &cad[0];
	x = ft_str_is_lowercase(str);
	x += '0';
	write (1, &x, 1);
	return (0);
}
 */