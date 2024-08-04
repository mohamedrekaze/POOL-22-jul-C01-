/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abagueri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:33:30 by abagueri          #+#    #+#             */
/*   Updated: 2024/07/25 19:17:54 by abagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	anum[3];

	anum[0] = '0';
	while (anum[0] <= '7')
	{
		anum[1] = anum[0] +1;
		while (anum[1] <= '8')
		{
			anum[2] = anum[1] + 1;
			while (anum[2] <= '9')
			{
				write(1, &anum[0], 1);
				write(1, &anum[1], 1);
				write(1, &anum[2], 1);
				if (anum[0] != '7')
				{
					write (1, ", ", 1);
				}
				anum[2]++;
			}
			anum[1]++;
		}
		anum[0]++;
	}
}
