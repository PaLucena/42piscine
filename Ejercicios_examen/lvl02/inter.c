/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:19:36 by palucena          #+#    #+#             */
/*   Updated: 2023/02/23 20:14:13 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ch_own(char *str1, int n)
{
	int	i;

	i = 0;
	while (str1[i] != '\0')
	{
		if (str1[n] == str1[i] && n == i)
			return (1);
		else if (str1[n] == str1[i] && n > i)
			return (0);
		i++;
	}
	return (0);
}

int	ch_other(char *str2, char a)
{
	int	i;

	i = 0;
	while (str2[i] != '\0')
	{
		if (str2[i] == a)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			if (ch_own(argv[1], i) == 1 && ch_other(argv[2], argv[1][i]) == 1)
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
