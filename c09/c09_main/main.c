/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 12:17:48 by lbenaim           #+#    #+#             */
/*   Updated: 2019/09/19 12:17:59 by lbenaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int		main(int argc, char **argv)
{
	char **tab;

	(void)argc;
	tab = ft_split(argv[1], argv[2]);
	for(int i = 0; tab[i]; i++)
		printf("test tab[%d] = %s\n",i, tab[i]);
}
