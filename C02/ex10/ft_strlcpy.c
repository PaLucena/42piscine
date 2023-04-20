/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:44:58 by palucena          #+#    #+#             */
/*   Updated: 2023/02/16 19:04:46 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	while (src[i] && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}

int	main(void)
{
	char	*src;
	char	dest[40];
	int		size;
	int		res;

	src = "Las pruebas son dificiles";
	size = 26;
	res = ft_strlcpy(dest, src, size);
	printf("%s \n%s\n%i", src, dest, res);
	if (size == 0)
		printf("%i", res);
	return (0);
}
