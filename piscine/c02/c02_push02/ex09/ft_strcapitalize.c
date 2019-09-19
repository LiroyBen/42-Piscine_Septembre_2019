/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:51:28 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/08 17:02:45 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int k;

	i = 0;
	k = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (k == 1)
				str[i] -= 32;
			k = 0;
		}
		else if (str[i] >= 48 && str[i] <= 57)
			k = 0;
		else
			k = 1;
		i++;
	}
	return (str);
}
