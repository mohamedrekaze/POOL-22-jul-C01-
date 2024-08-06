/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abagueri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:34:51 by abagueri          #+#    #+#             */
/*   Updated: 2024/08/05 19:46:17 by abagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)

{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (dest[i] != '\0' )
	{
		i++;
	}
	while(src[j] != '\0' && 0 < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
		nb--;
	}
	return dest;
}
int main(void)
{
	char dest[] = "hello";
	char src[] = "hala";
	printf("%s",ft_strncat(dest, src, 4));
}

