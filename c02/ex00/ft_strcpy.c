/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalucas- <jalucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:27:37 by jalucas-          #+#    #+#             */
/*   Updated: 2022/04/22 02:43:16 by jalucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count ++;
	}
	dest[count] = '\0';
	return (dest);
}
 #include <stdio.h>

 int main()
{
	char c[] = "lol"; // dest
	char d[] = "chocolate"; // src
	char *ptr; // recebe o destino (quarda um valor de memoria temporario) 
	ptr = ft_strcpy(c, d);
	printf("valor de %s", ptr);
	return 0;		
}
