/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalucas- <jalucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:10:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2022/04/22 15:53:50 by jalucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// não terminei!!!!!!!!!!!!!!!!!!!!!!
#include <unistd.h>

int	ft_bigger(char *str1, char *str2)
{
	int		i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0')
	{	
		if (str1[i] != str2[i])
		{
			if (str1[i] > str2[i])
				return (1);
			else
				return (2);
		}
		else
			++i;
	}
	return (0);
}

void	ft_print(char *str[], int size)
{
	int		i;
	int		j;

	i = 1;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			write(1, &str[i][j], 1);
			++j;
		}
		write(1, "\n", 1);
		++i;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_bigger(argv[j], argv[j + 1]) == 1)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			++j;
		}
		++i;
	}
	ft_print(argv, argc);
	return (0);
}
