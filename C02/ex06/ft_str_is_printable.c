/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 23:08:19 by palucena          #+#    #+#             */
/*   Updated: 2023/02/13 16:27:35 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	x;

	x = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
			x = 0;
		i++;
	}
	return (x);
}

/* int	main(void)
{
	int		x;
	char	cad[] = "4546684\n6";
	char	*str;

	str = &cad[0];
	x = ft_str_is_printable(str);
	x += '0';
	write (1, &x, 1);
	return (0);
} */