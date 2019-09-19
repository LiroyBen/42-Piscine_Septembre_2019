/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:16:22 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/10 18:40:09 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	string_size(char *word)
{
	unsigned int size;

	size = 0;
	while (word[size] != '\0')
	{
		size++;
	}
	return (size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int size_dest;
	unsigned int size_src;

	size_src = string_size(src);
	size_dest = string_size(dest);
	if (size_dest >= size)
		return (size_src + size);
	i = size_dest;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (size_dest + size_src);
}
