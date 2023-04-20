/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:30:56 by palucena          #+#    #+#             */
/*   Updated: 2023/02/21 16:41:32 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	(void)argc;
	i = argc - 1;
	j = 0;
	while (argv[i][j] && argc > 1)
	{
		write(1, &argv[i][j], 1);
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
