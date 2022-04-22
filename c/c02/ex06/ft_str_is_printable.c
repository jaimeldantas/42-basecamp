/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalucas- <jalucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:28:12 by jalucas-          #+#    #+#             */
/*   Updated: 2022/04/22 03:06:56 by jalucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 32 && str[count] <= 126))
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
	char c[] = "á";
	int ptr;
	ptr = ft_str_is_printable(c);
	printf("%i", ptr);
}
