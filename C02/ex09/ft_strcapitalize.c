/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:13:28 by palucena          #+#    #+#             */
/*   Updated: 2023/02/12 22:54:35 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;
	int		card;

	i = 0;
	card = 1;
	while (str[i])
	{
		c = str[i];
		if (card == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		else if (card == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			card = 1;
		else
			card = 0;
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	str[] = "las -+paTATAS 34del seNOR";

	ft_strcapitalize(str);
	printf("%s", str);
}
 */