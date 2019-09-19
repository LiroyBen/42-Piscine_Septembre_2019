/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 15:53:00 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/03 17:36:15 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int compteur;
	int c;

	compteur = 0;
	while(str[compteur] != '\0')
	{
		compteur++;
	}
	ft_putchar(compteur+48);
	return(compteur);
}

int main()
{
	ft_strlen("Test");
}
