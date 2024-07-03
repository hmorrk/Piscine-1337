/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houarrak <houarrak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:36:11 by houarrak          #+#    #+#             */
/*   Updated: 2024/06/27 22:35:09 by houarrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_numbers(int x, int y)
{
	ft_putchar((x / 10) + '0');
	ft_putchar((x % 10) + '0');
	ft_putchar(' ');
	ft_putchar((y / 10) + '0');
	ft_putchar((y % 10) + '0');
	if (x < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			print_numbers(x, y);
			y++;
		}
		x++;
	}
}
