/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:35:39 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/16 15:11:21 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff()
{
	int i;

	i = 97;
	while (i != 90)
	{
		ft_putchar(i);
		i++;
		i -= 32;
		ft_putchar(i);
		i += 32;
		i++;
	}
	ft_putchar('\n');
	return ;
}

int main()
{
	maff();
}
