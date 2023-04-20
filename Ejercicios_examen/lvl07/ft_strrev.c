/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:59:40 by palucena          #+#    #+#             */
/*   Updated: 2023/02/21 18:09:51 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = 0;
	while (str[j])
		j++;
	j -= 1;
	while (str[i] < str[j])
	{
		aux = str[i];
		str[i] = str[j];
		str[j] = aux;
		i++;
		j--;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "123456789";

	printf("%s", ft_strrev(str));
	return (0);
}
