/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 21:00:41 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/04 14:42:14 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int cmpt;

	cmpt = 0;
	while(str[cmpt] != '\0')
		ft_putchar(str[cmpt++]);
}

int main()
{
	ft_putstr("Ceci est um tableau de char");
}
