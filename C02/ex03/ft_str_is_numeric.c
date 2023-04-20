/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:09:18 by palucena          #+#    #+#             */
/*   Updated: 2023/02/12 22:40:53 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	x;

	x = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			x = 0;
		i++;
	}
	return (x);
}

/* int	main(void)
{
	int		x;
	char	cad[] = "45466846";
	char	*str;

	str = &cad[0];
	x = ft_str_is_numeric(str);
	x += '0';
	write (1, &x, 1);
	return (0);
}
 */