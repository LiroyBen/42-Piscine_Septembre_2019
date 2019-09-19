/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:55:57 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/17 17:56:21 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_get_size(int size, char **strs, char *sep)
{
	int i;
	int sum;

	i = 0;
	while (i < size)
	{
		sum = sum + ft_strlen(strs[i]);
		i++;
	}
	sum = sum + (ft_strlen(sep) * (size - 1));
	return (sum);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_get_size(size, strs, sep);
	if (size == 0)
		j = 0;
	if (!(str = malloc(sizeof(char) * (j + 1))))
		return (NULL);
	*str = '\0';
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (!(i + 1 == size))
			str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}
