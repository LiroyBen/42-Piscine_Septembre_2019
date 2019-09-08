/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 19:12:14 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/08 22:26:37 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int h;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[h] != '\0')
	{
		dest[i + h] = src[n];
		n++;
	}
	return(dest);
}

int main()
{
	char dest[50] = "frite";
	char src[] = "steak";
	printf("%s", ft_strcat(dest, src));
}
