/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chaine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:24:11 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/08 20:52:44 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*chaine(char *str)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;
	int i;

	i = 16;
	a = str[i];
	i = 18;
	b = str[i];
	i = 20;
	c = str[i];
	i = 22;
	d = str[i];
	i = 24;
	e = str[i];
	i = 26;
	f = str[i];
	i = 28;
	g = str[i];
	i = 30;
	h = str[i];
	ft_putchar(a);
	return (0);
}

int		main(void)
{
	char str[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	chaine(str);
}
