/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:53:14 by palucena          #+#    #+#             */
/*   Updated: 2023/02/22 16:03:18 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_count(char c)
{
	int	reps;

	reps = 1;
	if (c >= 'a' && c <= 'z')
		reps = c - 'a' + 1;
	if (c >= 'A' && c <= 'Z')
		reps = c - 'A' + 1;
	return (reps);
}

int	main(int argc, char **argv)
{
	int	reps;
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			reps = ft_count(argv[1][i]);
			while (reps > 0)
			{
				write(1, &argv[1][i], 1);
				reps--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
