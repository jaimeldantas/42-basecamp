/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalucas- <jalucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 01:53:27 by jalucas-          #+#    #+#             */
/*   Updated: 2022/04/23 01:53:27 by jalucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char a);

  int error(int x , int y)
  {
    if ((x < 0 || y < 0) && (x > 2,147,483,647 || y > 2,147,483,647))
	{
		write(1, "error", 5);
		return 0;
	}
  }

void rush(int x , int y) 
{

  int c;
  int l;

  c = 1;
  l = 1;
if(error(x, y) != 0)
{
	while(l <=y )	{
		c= 1;
		while(c <= x)
		{
		if((c == 1 && l== 1) || (c == 1 && l == y))
			ft_putchar('A');

		else if((c == x && l == y) || (c == x && l == 1))
			ft_putchar('C');

		else if((l == 1 || l == y) || (c == 1 || c == x))
			ft_putchar('B');

		else
		{
			ft_putchar(' ');
		}

		c++; 
		}  
		l ++;

		ft_putchar('\n'); 
		}
	}

}