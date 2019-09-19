/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 09:20:14 by emoulard          #+#    #+#             */
/*   Updated: 2019/09/01 16:50:17 by emoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_printchar(int x, int y, int col, int row)
{
	if (col == 0 && row == 0)
		ft_putchar('A');
	else if (col == 0 && row == y - 1)
		ft_putchar('C');
	else if (col == x - 1 && row == 0)
		ft_putchar('A');
	else if (col == x - 1 && row == y - 1)
		ft_putchar('C');
	else if (col != 0 && col != x - 1 && row != 0 && row != 0 && row != y - 1)
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int row;
	int col;

	col = 0;
	row = 0;
	if (x < 0 || y < 0)
	{
		write(1, "Error: arguments for function rush must be positive\n", 58);
		return ;
	}
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			ft_printchar(x, y, col, row);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
