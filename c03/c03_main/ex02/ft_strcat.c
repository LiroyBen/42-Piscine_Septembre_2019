/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:42:11 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/06 17:01:13 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		n++;
	}
	return(dest);
}

int main()
{
	char dest[] = "frite";
	char src[] = "steak";
	printf("%s", ft_strcat(dest, src));
}
