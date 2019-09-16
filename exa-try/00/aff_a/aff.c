/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:53:09 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/16 13:21:43 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	program(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
		{
			ft_putchar('a');
			ft_putchar('\n');
			return ;
		}
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{	
		ft_putchar('a');
		ft_putchar('\n');
	}
	else
		program(argv[1]);
}
