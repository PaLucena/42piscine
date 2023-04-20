/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:01:36 by palucena          #+#    #+#             */
/*   Updated: 2023/02/19 15:50:08 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned	int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

/* int	main(void)
{
	char			*str1;
	char			*str2;
	int				x;

	str1 = "098765432";
	str2 = "09876543";
	x = ft_strncmp(str1, str2, 7);
	printf("Diferencia: %i", x);
	return (0);
}
 */