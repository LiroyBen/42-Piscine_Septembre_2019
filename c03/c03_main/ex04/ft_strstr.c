/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:24:04 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/09 16:17:15 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
}

int main()
{
	char str[] = "";
	char to_find[] = "":
	printf("%s", ft_strstr(str, to_find));
}
