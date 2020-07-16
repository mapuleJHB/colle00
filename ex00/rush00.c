/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushOX.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapule <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:20:46 by mapule            #+#    #+#             */
/*   Updated: 2020/07/16 16:53:30 by mapule           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>


void	 rush(int x, int y)
{
  int   p;
  int   m;

  p = 1;
  while(p <= y)
  {
   m= 1;
    while (m <= x)
    {
     	 if ((p == 1 || p == y) && (m == 1 ||m == x ) )
      	{
        	ft_putchar('o');
      	}
      	else if ((p > 1 || p < y) && (m == 1 || m == x))
      	{
        	ft_putchar('|');
      	}
      	else if ((p == 1 || p  == y) && (m > 1 || m < x))
	 	{
        	ft_putchar('-');
		}
      	else if ((p != 1 ||p != y) && (m != 1 || m != y))
      	{
        	ft_putchar(' ');
      	}
     	m++;
    }
    ft_putchar('\n');
     p++;
   }
}
