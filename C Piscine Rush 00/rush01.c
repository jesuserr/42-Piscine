/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesuserr <jesuserr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 09:50:54 by jesuserr          #+#    #+#             */
/*   Updated: 2022/11/27 10:39:41 by jesuserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putline(char edge, char middle, char final, int x)
{
	int		counter;
	char	symbol;

	counter = 0;
	while (counter < x)
	{
		if (counter == 0)
		{
			symbol = edge;
		}
		if (counter == x - 1 && x > 1)
		{
			symbol = final;
		}
		if (counter > 0 && counter < x - 1)
		{
			symbol = middle;
		}
		ft_putchar(symbol);
		counter ++;
	}
}

void	rush(int x, int y)
{
	int	counter;

	if (x > 0 && y > 0)
	{
		counter = 0;
		while (counter < y)
		{
			if (counter == 0)
			{
				ft_putline('/', '*', 92, x);
			}
			if (counter == y - 1 && y > 1)
			{		
				ft_putline(92, '*', '/', x);
			}
			if (counter > 0 && counter < y - 1)
			{
				ft_putline('*', ' ', '*', x);
			}
			write(1, "\n ", 1);
			counter ++;
		}
	}
}
