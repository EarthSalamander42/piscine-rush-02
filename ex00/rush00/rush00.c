/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 10:44:33 by mabouce           #+#    #+#             */
/*   Updated: 2018/07/08 18:16:22 by mabouce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush012(int x, int y, int x2, int y2)
{
	if (y2 == y && x2 == 1 && y2 != 1)
		ft_putchar('o');
	if (y2 == y && x2 != 1 && x2 != x && y2 != 1)
		ft_putchar('-');
	if (y2 == y && x2 == x && x2 != 1 && y2 != 1)
		ft_putchar('o');
	if (y2 != y && y2 != 1 && (x2 == 1 || x2 == x))
		ft_putchar('|');
	if (y2 != y && y2 != 1 && x2 != 1 && x2 != x)
		ft_putchar(' ');
	if (y2 == 1 && x2 == 1)
		ft_putchar('o');
	if (y2 == 1 && x2 != 1 && x2 != x)
		ft_putchar('-');
	if (y2 == 1 && x2 == x && x2 != 1)
		ft_putchar('o');
}

void	rush(int x, int y)
{
	int y2;
	int x2;

	y2 = 1;
	if (x < 1 || y < 1)
		return ;
	while (y2 <= y)
	{
		x2 = 1;
		while (x2 <= x)
		{
			rush012(x, y, x2, y2);
			x2++;
		}
		ft_putchar('\n');
		y2++;
	}
}
