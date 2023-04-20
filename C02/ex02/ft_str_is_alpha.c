/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:42:49 by palucena          #+#    #+#             */
/*   Updated: 2023/02/12 22:39:52 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	x;

	x = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			x = 0;
		}
		i++;
	}
	return (x);
}

/* int	main(void)
{
	int		x;
	char	cad[] = "ertyuio";
	char	*str;

	str = &cad[0];
	x = ft_str_is_alpha(str);
	x += '0';
	write (1, &x, 1);
	return (0);
} */
