/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abagueri <abagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:46:16 by abagueri          #+#    #+#             */
/*   Updated: 2024/08/13 12:38:18 by abagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	r;
	int	a;
	int	q;

	a = 0;
	q = 1;
	r = a + q;
	while (index > 0)
	{
		a = q;
		q = r;
		r = a + q;
		index--;
	}
	return (r);
}
