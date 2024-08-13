/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abagueri <abagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:22:20 by abagueri          #+#    #+#             */
/*   Updated: 2024/08/12 14:23:18 by abagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	while (j < argc)
	{
		while (argv[j][i] != '\0')
		{
			write (1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		j++;
	}
}
