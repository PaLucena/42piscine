/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:01:36 by palucena          #+#    #+#             */
/*   Updated: 2023/02/14 21:21:37 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	x;
	int				i;

	x = 0;
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	x = s1[i] - s2[i];
	return (x);
}

/* int	main(void)
{
	char	*str1;
	char	*str2;
	int		x;

	str1 = "123456781";
	str2 = "12345678";
	x = ft_strcmp(str1, str2);
	printf("Diferencia: %i", x);
	return (0);
} */