/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:05:37 by palucena          #+#    #+#             */
/*   Updated: 2023/02/23 18:18:33 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	unsigned int	i;
	unsigned int	size;
	char			*dest;

	size = 0;
	while (src[size] != '\0')
		size++;
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (!(dest))
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	str[10] = "";

	printf("%s", ft_strdup(str));
	return (0);
}
