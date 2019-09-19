/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csegal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:58:03 by csegal            #+#    #+#             */
/*   Updated: 2019/09/12 14:27:59 by csegal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int i;
	int lenght_base;

	lenght_base = 0;
	while (base[lenght_base] != '\0')
	{
		i = lenght_base + 1;
		if (base[lenght_base] == '-' || base[lenght_base] == '+' ||
			base[lenght_base] == ' ' || base[lenght_base] == '\t' ||
			base[lenght_base] == '\f' || base[lenght_base] == '\v' ||
			base[lenght_base] == '\n' || base[lenght_base] == '\r' ||
			base[lenght_base] < 32 || base[lenght_base] == 127)
		{
			return (0);
		}
		while (base[i] != '\0')
			if (base[i++] == base[lenght_base])
				return (0);
		lenght_base++;
	}
	return (lenght_base);
}

int	ft_p(int nr, int power)
{
	int i;
	int res;

	i = 0;
	res = 1;
	while (i < power)
	{
		res = res * nr;
		i++;
	}
	return (res);
}

int	in_b(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != c && base[i])
		i++;
	if (base[i] == '\0')
	{
		return (-1);
	}
	return (i);
}

int	get_nr_sign(char *str)
{
	int i;
	int sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	return (i * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int nr;
	int b_l;
	int res;
	int s;

	i = get_nr_sign(str);
	s = (i >= 0 ? 1 : -1);
	i = i * s;
	s = i * s;
	b_l = 0;
	while (in_b(str[b_l + i], base) >= 0)
		b_l++;
	res = 0;
	nr = check_base(base);
	if (nr < 2)
		return (0);
	while (in_b(str[i], base) >= 0)
	{
		res += in_b(str[i], base) * ft_p(nr, b_l - (i - (s >= 0 ? s : -s)) - 1);
		i++;
	}
	return (res * (s >= 0 ? 1 : -1));
}
