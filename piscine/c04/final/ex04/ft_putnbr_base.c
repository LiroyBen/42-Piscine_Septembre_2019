/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:48:06 by csegal            #+#    #+#             */
/*   Updated: 2019/09/12 14:22:38 by csegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_hasspaces(char c)
{
	if (c == ' ' || c == '\t' || c == '\f' ||
		c == '\n' || c == '\v' || c == '\r')
	{
		return (1);
	}
	return (0);
}

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || ft_hasspaces(base[i]))
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	l_nbr;
	long int	i;
	long int	len_base;
	char		str[100];

	if (nbr == 0)
		ft_putchar(base[0]);
	len_base = check_base(base);
	if (len_base < 2)
		return ;
	i = 0;
	l_nbr = nbr;
	if (l_nbr < 0)
	{
		l_nbr = -l_nbr;
		ft_putchar('-');
	}
	while (l_nbr)
	{
		str[i++] = base[l_nbr % len_base];
		l_nbr /= len_base;
	}
	while (i > 0)
		ft_putchar(str[--i]);
}
