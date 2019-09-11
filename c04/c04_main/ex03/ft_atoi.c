/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:25:31 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/11 18:51:53 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int nombre;
	int negatif;

	i = 0;
	nombre = 0;
	negatif = 0;

	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r')) 
	{
		i++;
	}
	if (str[i] == '-')
	{
		negatif = 1;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nombre = nombre * 10;
		nombre += (int)str[i] - '0';
		i++;
	}
	if (negatif == 1)
	{
		return (-nombre);
	}
	else
	{
		return (nombre);
	}
}
