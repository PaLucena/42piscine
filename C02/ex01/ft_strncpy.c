/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:19:56 by palucena          #+#    #+#             */
/*   Updated: 2023/02/12 22:33:31 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = 0;
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char	dest[] = "Something";
	char	*src;
	int		size;

	size = 30;
	src = "Good morning";
	ft_strncpy(dest, src, size);
	printf("%s\n%s", dest, src);
	return (0);
}
 */