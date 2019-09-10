/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:24:04 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/10 18:11:53 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		string_size(char *word)
{
	int size;

	size = 0;
	while (word[size] != '\0')
	{
		size++;
	}
	return (size);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int size_to_find;

	i = 0;
	size_to_find = string_size(to_find);
	if (size_to_find == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == *to_find)
		{
			j = 1;
			while (str[i + j] == to_find[j] && j < size_to_find)
			{
				j++;
			}
		}
		if (j == size_to_find)
			return (str + i);
		i++;
	}
	return (0);
}
