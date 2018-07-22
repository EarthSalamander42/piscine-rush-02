/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 23:11:21 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/11 14:00:46 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int i;
	int negative;
	int out;

	i = 0;
	negative = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '-')
	{
		negative = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48 && str[i] <= 57))
			out = out * 10 + str[i] - 48;
		i++;
	}
	return (negative * out);
}
