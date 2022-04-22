/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalucas- <jalucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:36:52 by jalucas-          #+#    #+#             */
/*   Updated: 2022/04/22 23:15:30 by jalucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	i;

	i = 0;
	count = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[count] != '\0' && count < nb)
	{
		dest[i] = src[count];
		i ++;
		count ++;
	}
	dest[i] = '\0';
	return (dest);
}
