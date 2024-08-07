/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abagueri <abagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:34:51 by abagueri          #+#    #+#             */
/*   Updated: 2024/08/07 16:00:57 by abagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)

{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < nb)
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
//int main(void)
//{
//	char dest[5] = "hello";
//	char src[] = "hala";
//	printf("%s",ft_strncat(dest, src, 4));
//}
