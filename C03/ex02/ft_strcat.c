/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abagueri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:13:16 by abagueri          #+#    #+#             */
/*   Updated: 2024/08/05 19:01:51 by abagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strcat(char *dest, char *src) 
	{
		int	i;
		int	j;

		i = 0;
		j = 0;
		while (dest[i] != '\0'){
			i++;
		}
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			//j++;
			i++;
		}
		return dest;
	}
int main(void)
{
 char	dest[50] = "hala";
 char	src[] = "barca";
	printf("%s ",ft_strcat(dest, src));
}
