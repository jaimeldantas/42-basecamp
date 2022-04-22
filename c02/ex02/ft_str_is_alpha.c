/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalucas- <jalucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:27:54 by jalucas-          #+#    #+#             */
/*   Updated: 2022/04/22 03:00:51 by jalucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{	
		if (!((str[count] >= 'a' && str[count] <= 'z')
				|| (str[count] >= 'A' && str[count] <= 'Z')))
		{
			return (0);
		}
		count ++;
	}
	return (1);
}
