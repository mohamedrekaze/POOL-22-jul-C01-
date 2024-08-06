/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abagueri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:03:52 by abagueri          #+#    #+#             */
/*   Updated: 2024/08/06 10:39:59 by abagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while(s1[i] != '\0' && s2[i] == s1[i] && i < n )
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
int main () 
{
	char s1 [] = "hellorld" ;
	char s2 [] ="hello world" ;
	printf ("%d" ,ft_strncmp ( s1 , s2 , 7 )) ; 
}
