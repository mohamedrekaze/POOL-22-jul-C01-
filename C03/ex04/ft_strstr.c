/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abagueri <abagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:10:03 by abagueri          #+#    #+#             */
/*   Updated: 2024/08/09 19:47:44 by abagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i + j] && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find == '\0')
		{
			return (str + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
