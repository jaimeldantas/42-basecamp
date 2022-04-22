/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalucas- <jalucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:36:55 by jalucas-          #+#    #+#             */
/*   Updated: 2022/04/22 23:16:14 by jalucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	count;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	count = 0;
	while (src[count] != '\0')
	{
		dest[i] = src[count];
		i++;
		count++;
	}
	dest[i] = '\0';
	return (dest);
}
