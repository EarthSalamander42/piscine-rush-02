/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 10:41:50 by mabouce           #+#    #+#             */
/*   Updated: 2018/07/08 18:13:52 by mabouce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(int x, int y);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i = i + 1;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	argc++;
	argc--;
	if (ft_strcmp(argv[1], "Colle-00") == 0)
		printf("%d\n", 1);
	return (0);
}
