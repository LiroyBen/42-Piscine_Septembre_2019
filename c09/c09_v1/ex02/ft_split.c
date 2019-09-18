/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 20:30:52 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/18 23:31:45 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		char_in(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int		count_words(char *str, char *charset)
{
	int i;
	int nb_words;

	i = 0;
	nb_words = 0;
	while (str[i])
	{
		while (str[i] && char_in(str[i], charset))
			i++;
		if (str[i])
		{
			while (str[i] && !char_in(str[i], charset))
				i++;
			nb_words++;
		}
	}
	return (nb_words);
}

char	*ft_strndup(char *src, int len)
{
	char	*dup;
	int		i;

	if (!src)
		return (NULL);
	if (!(dup = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (src[i] && i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab_words;
	int		size;
	int		i;
	int		len;

	size = count_words(str, charset);
	if (!(tab_words = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	tab_words[size] = 0;
	i = 0;
	while (i < size)
	{
		len = 0;
		while (*str && char_in(*str, charset))
			str++;
		while (str[len] && !char_in(str[len], charset))
			len++;
		if (!(tab_words[i] = ft_strndup(str, len)))
			return (NULL);
		str += len;
		i++;
	}
	return (tab_words);
}
