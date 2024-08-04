/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abagueri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:25:12 by abagueri          #+#    #+#             */
/*   Updated: 2024/07/25 18:21:03 by abagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	caracter;

	caracter = 'a';
	while (caracter <= 'z')
	{
		write(1, &caracter, 1);
		caracter++;
	}
}
