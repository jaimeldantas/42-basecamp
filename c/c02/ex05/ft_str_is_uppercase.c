/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalucas- <jalucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:28:08 by jalucas-          #+#    #+#             */
/*   Updated: 2022/04/22 03:05:49 by jalucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 'A' && str[count] <= 'Z'))
		{
			return (0);
		}
		count ++;
	}
	return (1);
}

#include <stdio.h>
 int main()
 {
	 char c[] = "";
	 int ptr;
	 ptr = ft_str_is_uppercase(c);
	 printf("%i", ptr);
 }