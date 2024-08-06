/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abagueri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:50:36 by abagueri          #+#    #+#             */
/*   Updated: 2024/08/05 13:06:08 by abagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] == s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
//int main(void)
//	{
//		char s1[] = "hala";
//		char s2[] = "halw";
//		int a;
//		a = ft_strcmp(s1, s2);
//		printf("%d",a);
//	}
